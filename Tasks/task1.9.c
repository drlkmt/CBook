#include <stdio.h>

int main() {
    int c, spaceFlag;

    while((c = getchar()) != '/')
    {
        if((c == ' ') && (spaceFlag == 0))
        {
            putchar(' ');
            spaceFlag = 1;
        }
        if(c != ' ')
        {
            putchar(c);
            spaceFlag = 0;
        }
    }
}