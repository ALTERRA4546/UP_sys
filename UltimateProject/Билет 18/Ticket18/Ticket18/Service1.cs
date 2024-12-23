using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Linq;
using System.ServiceProcess;
using System.Text;
using System.Timers;
using System.Threading.Tasks;
using System.IO;

namespace Ticket18
{
    public partial class Service1 : ServiceBase
    {
        Timer timer;
        string inPath = "C:\\testService\\inText.txt";
        string outPath = "C:\\testService\\outText.txt";

        public Service1()
        {
            InitializeComponent();
            this.AutoLog = true;
            this.CanPauseAndContinue = true;
            this.CanStop = true;
        }

        protected override void OnStart(string[] args)
        {
            timer = new Timer(60000);
            timer.Elapsed += (sender, e) => CheckFile();
            timer.Start();

            if (!Directory.Exists("C:\\testService"))
            { 
                Directory.CreateDirectory("C:\\testService");
            }

            if (!File.Exists(inPath))
            { 
                File.Create(inPath);
            }
            if (!File.Exists(outPath))
            {
                File.Create(outPath);
            }
        }

        protected override void OnStop()
        {
            timer.Stop();
            timer.Dispose();
        }

        private void CheckFile()
        {
            Random random = new Random();

            if (File.Exists(inPath))
            {
                string inFileText = File.ReadAllText(inPath);
                File.WriteAllText(inPath, "");
                int numCount;
                if (int.TryParse(inFileText, out numCount))
                {
                    string outFileText = null;
                    for (int i = 0; i < numCount; i++)
                    {
                        outFileText += random.Next(0, 25) + " ";
                    }
                    File.WriteAllText(outPath, outFileText);
                }
            }
        }
    }
}
