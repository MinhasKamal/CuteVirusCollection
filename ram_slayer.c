// Source: https://www.quora.com/What-is-your-smallest-piece-of-code-that-can-crash-the-computer/answer/George-Gonzalez-5?srid=u2HNX
// Usees up all of RAM.

int main(){
    while(malloc(1000));
    return 0;
}
