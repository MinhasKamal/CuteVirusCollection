// Source: https://www.quora.com/What-is-your-smallest-piece-of-code-that-can-crash-the-computer/answer/George-Gonzalez-5?srid=u2HNX
// Consumes full space of the RAM.

main(){
    while(malloc(1000));
}
