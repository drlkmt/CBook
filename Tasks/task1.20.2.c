#include <stdio.h>

#define TABSIZE 3
#define MAXSIZE 10

int getlines(char s[], int lim);
void outputWithOutTabs(char s[]);

int main()
{
	char line[MAXSIZE];
	getlines(line, MAXSIZE);
	printf("%s", line);
	return 0;
}

int getlines(char s[], int lim)
{
	int i, c;
	i = c = 0;
	while (i <= lim - 1 && (c = getchar()) != '/' && c != '\n')
	{
		if (c == '\t' && ((i + TABSIZE) <= (lim - 1)))
		{
			for (int j = 0; j < TABSIZE; ++j)
				s[i++] = ' ';
		}
		else
		{
			s[i] = c;
			++i;
		}
	}

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	for (int j = 0; j <= i; ++j)
	{
		printf("%d:%d ", j, s[j]);
	}

	printf("\n[%s]\n", s);

	return i;
}
