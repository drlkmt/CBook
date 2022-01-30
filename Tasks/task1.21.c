#include <stdio.h>

#define MAXSIZE 100
#define TABSIZE 6

int getlines(char s[], int lim);

int main()
{
	char line[MAXSIZE];
	getlines(line, MAXSIZE);
	printf("%s", line);
	return 0;
}

int getlines(char s[], int lim)
{
	int i, c, cxSp;
	i = c = cxSp = 0;
	while (i <= lim - 1 && (c = getchar()) != '/' && c != '\n')
	{
		if (c == ' ')
			++cxSp;

		else
		{
			for(int j = 0; j < cxSp % TABSIZE; ++j)
			{
				s[i++] = ' ';
			}
			for(int j = 0; j < cxSp / TABSIZE; ++j)
			{
				s[i++] = '\t';
			}
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
	return i;
}
