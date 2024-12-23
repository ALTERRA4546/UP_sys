using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ticket17
{
    internal class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            Console.WriteLine("1.Send text\n2.Send image");
            while (true)
            {
                string s = Console.ReadLine();
                switch (s)
                {
                    case "1":
                        Console.WriteLine("Set test:\n");
                        string text = Console.ReadLine();
                        Clipboard.SetText(text);
                        Console.WriteLine("Done");
                        break;

                    case "2":
                        Console.WriteLine("Set image path:\n");
                        string path = Console.ReadLine();
                        Image image = Image.FromFile(path);
                        Clipboard.SetImage(image);
                        Console.WriteLine("Done");
                        break;
                    default:
                        break;
                }
            }
        }
    }
}
