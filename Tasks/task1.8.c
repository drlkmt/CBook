#include <stdio.h>

int main() {
    int c, nSpace, nt, nEOF;
    c = nt = nSpace = nEOF = 0;

    while((c = getchar()))
    {
        if(c == '/')
        {
            ++nEOF;
            break;
        }
        if( c == ' ')
            ++nSpace;
        if( c == '\t')
            ++nt;

    }

    printf("Tab: %d\tSpace: %d\tEOF:%d",nt,nSpace,nEOF);

}