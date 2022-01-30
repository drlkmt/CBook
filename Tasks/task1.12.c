#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c;
    while((c = getchar()) != '/')
    {
        putchar(c);
        putchar('\n');
    }

}