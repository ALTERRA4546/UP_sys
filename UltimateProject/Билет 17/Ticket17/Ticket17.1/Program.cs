using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ticket17._1
{
    internal class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            Console.WriteLine("1.Cath text\n2.Cath image");
            while (true)
            {
                string s = Console.ReadLine();
                switch (s)
                {
                    case "1":
                        Console.WriteLine("Set test:\n");
                        if (Clipboard.ContainsText())
                        {
                            Console.WriteLine(Clipboard.GetText());
                        }
                        else
                        {
                            Console.WriteLine("No message");
                        }
                        Console.WriteLine("Done");
                        break;

                    case "2":
                        Console.WriteLine("Set image path:\n");
                        string path = Console.ReadLine();
                        if (Clipboard.ContainsImage())
                        {
                            Image image = Clipboard.GetImage();
                            image.Save(path);
                        }
                        else
                        {
                            Console.WriteLine("No message");
                        }
                        Console.WriteLine("Done");
                        break;
                    default:
                        break;
                }
            }
        }
    }
}
