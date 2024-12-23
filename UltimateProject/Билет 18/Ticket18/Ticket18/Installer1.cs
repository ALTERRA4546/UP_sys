using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Configuration.Install;
using System.Linq;
using System.ServiceProcess;
using System.Threading.Tasks;

namespace Ticket18
{
    [RunInstaller(true)]
    public partial class Installer1 : System.Configuration.Install.Installer
    {
        ServiceInstaller serviceInstaller;
        ServiceProcessInstaller serviceProcess;

        public Installer1()
        {
            InitializeComponent();
            serviceInstaller = new ServiceInstaller();
            serviceProcess = new ServiceProcessInstaller();

            serviceProcess.Account = ServiceAccount.LocalSystem;
            serviceInstaller.StartType = ServiceStartMode.Manual;
            serviceInstaller.ServiceName = "Service1";

            Installers.Add(serviceInstaller);
            Installers.Add(serviceProcess);
        }
    }
}
