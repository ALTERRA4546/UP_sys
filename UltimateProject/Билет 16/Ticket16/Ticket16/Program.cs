using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace Ticket16
{
    internal class Program
    {
        static async Task DownloadImage(string url, string path)
        {
            using (HttpClient client = new HttpClient())
            { 
                HttpResponseMessage httpResponseMessage = await client.GetAsync(url);
                httpResponseMessage.EnsureSuccessStatusCode();
                using (Stream stream = await httpResponseMessage.Content.ReadAsStreamAsync())
                using (var file = new FileStream(path, FileMode.Create, FileAccess.Write))
                { 
                    await stream.CopyToAsync(file);
                }
            }
        }

        static async Task Main(string[] args)
        {
            string url = Console.ReadLine();
            string path = Console.ReadLine();

            await DownloadImage(url, path);
        }
    }
}
