using System;
using System.Collections.Generic;
using System.IO.Compression;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ticket19
{
    internal class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                Console.WriteLine("1.Archve\n2.Unarchve");
                string s = Console.ReadLine();
                switch (s)
                {
                    case "1":
                        Console.WriteLine("select path");
                        string path = Console.ReadLine();
                        string outpath = Console.ReadLine();
                        ZipFile.CreateFromDirectory(path, outpath);
                        break;

                    case "2":
                        Console.WriteLine("select path");
                        string path1 = Console.ReadLine();
                        string outpath1 = Console.ReadLine();
                        ZipFile.ExtractToDirectory(path1, outpath1);
                        break;

                    default:
                        break;
                }
            }
        }
    }
}
