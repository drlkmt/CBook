#include <stdio.h>

#define MAXLEN 10 // Максимальная длинна строки во входных данных.

int main()
{
    int c, nCxCol, i, maxInWord;
    nCxCol = maxInWord  = 0;
    int nLen[MAXLEN];
    for (i = 0; i < MAXLEN; ++i)
        nLen[i] = 0;

    while ((c = getchar()) != '/')
    {
        if (c == '\n' || c == '\t' || c == ' ')
        {
            ++nLen[nCxCol % MAXLEN];
            nCxCol = 0;

        }
        else
        {
            ++nCxCol;
            if (maxInWord < nLen[nCxCol % MAXLEN])
                maxInWord = nLen[nCxCol % MAXLEN];
        }

    }
/*
    if (c != '\n' && c != '\t' && c != ' ' && nCxCol != 0)
    {
        ++nLen[nCxCol % MAXLEN];
        ++maxInWord;
    }
    for (i = 0; i < MAXLEN; ++i)
    {
        if (nLen[i] != 0)
            printf("%d: %d\n", i, nLen[i]);
    }
    printf("\n"); */
// asdf asdf asdfasdf asd asd asd asd asd as as a a/

    for (i = maxInWord; i > 0; --i)
    {
        printf("%d ", i);

        for (int j = 1; j < MAXLEN; ++j)
        {
            if(nLen[j] >= i)
                printf("#");
            else
                printf(" ");
        }

        printf("\n");
    }
    printf("  ");
    for (i = 1; i < MAXLEN; ++i)
    {
        printf("%d",i);
    }
}

