#include <iostream>

using std::cout;
using std::endl;
using namespace std;

int main(){
cout<<"H/W path           Device      Class          Description\n"
<<"=========================================================\n"
<<"                               system         Inspiron 3442 (0651)\n"
<<"/0                             bus            0VVC80\n"
<<"/0/0                           memory         64KiB BIOS\n"
<<"/0/1                           memory         4GiB System memory\n"
<<"/0/1/0                         memory         4GiB SODIMM DDR3 Synchronous 1600 MHz (0.6 ns)\n"
<<"/0/6                           memory         3MiB L3 cache\n"
<<"/0/5                           memory         512KiB L2 cache\n"
<<"/0/4                           memory         128KiB L1 cache\n"
<<"/0/24                          processor      Intel(R) Core(TM) i3-4005U CPU @ 1.70GHz\n"
<<"/0/100                         bridge         Haswell-ULT DRAM Controller\n"
<<"/0/100/2                       display        Haswell-ULT Integrated Graphics Controller\n"
<<"/0/100/3                       multimedia     Haswell-ULT HD Audio Controller\n"
<<"/0/100/14                      bus            8 Series USB xHCI HC\n"
<<"/0/100/16                      communication  8 Series HECI #0\n"
<<"/0/100/1b                      multimedia     8 Series HD Audio Controller\n"
<<"/0/100/1c                      bridge         8 Series PCI Express Root Port 1\n"
<<"/0/100/1c.2                    bridge         8 Series PCI Express Root Port 3\n"
<<"/0/100/1c.2/0      wlp6s0      network        BCM43142 802.11b/g/n\n"
<<"/0/100/1c.3                    bridge         8 Series PCI Express Root Port 4\n"
<<"/0/100/1c.3/0      enp7s0      network        RTL810xE PCI Express Fast Ethernet controller\n"
<<"/0/100/1d                      bus            8 Series USB EHCI #1\n"
<<"/0/100/1f                      bridge         8 Series LPC Controller\n"
<<"/0/100/1f.2        scsi0       storage        8 Series SATA Controller 1 [AHCI mode]\n"
<<"/0/100/1f.2/0      /dev/sda    disk           1TB WDC WD10JPVX-75J\n"
<<"/0/100/1f.2/0/1    /dev/sda1   volume         500MiB Windows NTFS volume\n"
<<"/0/100/1f.2/0/2    /dev/sda2   volume         472GiB Windows NTFS volume\n"
<<"/0/100/1f.2/0/3    /dev/sda3   volume         482MiB Windows NTFS volume\n"
<<"/0/100/1f.2/0/4    /dev/sda4   volume         458GiB Extended partition\n"
<<"/0/100/1f.2/0/4/5  /dev/sda5   volume         2MiB Linux filesystem partition\n"
<<"/0/100/1f.2/0/4/6  /dev/sda6   volume         512MiB EXT4 volume\n"
<<"/0/100/1f.2/0/4/7  /dev/sda7   volume         304GiB Linux LVM Physical Volume partition\n"
<<"/0/100/1f.2/0/4/8  /dev/sda8   volume         153GiB Linux filesystem partition\n"
<<"/0/100/1f.2/1      /dev/cdrom  disk           DVD+-RW GU90N\n"
<<"/0/100/1f.3                    bus            8 Series SMBus Controller\\nn"
<<"/0/2                           system         PnP device PNP0c01\n"
<<"/0/3                           system         PnP device PNP0c02\n"
<<"/0/7                           system         PnP device PNP0b00\n"
<<"/0/8                           generic        PnP device INT3f0d\n"
<<"/0/9                           system         PnP device PNP0c02\n"
<<"/0/a                           input          PnP device PNP0303\n"
<<"/0/b                           system         PnP device PNP0c02\n"
<<"/0/c                           system         PnP device PNP0c02\n"
<<"/1                             power          DELL T1G4M46\n"
<<"/2                 virbr0-nic  network        Ethernet interface\n"
<<"/3                 virbr0      network        Ethernet interface"<<endl;

return 0;
}
