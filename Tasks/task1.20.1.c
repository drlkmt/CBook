#include <stdio.h>

#define TABSIZE 21
#define MAXSIZE 100

int getlines(char s[], int lim);
void outputWithOutTabs(char s[]);

int main()
{
	char line[MAXSIZE];
	getlines(line, MAXSIZE);
	outputWithOutTabs(line);
	printf("\n[%s]", line);
	return 0;
}

int getlines(char s[], int lim)
{
	int i,c;
	for(i = 0; i <= lim - 1 && (c = getchar()) != '/' && c != '\n';++i)
		s[i] = c;
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void outputWithOutTabs(char s[])
{
	int i, c;
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == '\t')
		{
			for(int j = 0; j < TABSIZE; ++j)
				putchar(' ');
		}
		else
			putchar(s[i]);
		++i;
	}

	return;
}