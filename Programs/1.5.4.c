#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != '/')
    {
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == '\n' || c == '\t' || c == ' ')
            state = OUT;
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("Line: %d\tWords: %d\tChar: %d\n",nl,nw,nc);

}