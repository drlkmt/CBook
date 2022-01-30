#include <stdio.h>

#define MAXLINE 1000
#define MAXSLICE 3

int getlines(char s[], int lim);
void slice(char s[], int lim);

int main()
{
	char line[MAXLINE];
	int len = 0;
	while ((len = getlines(line, MAXLINE)) > 0)
	{
		slice(line, MAXSLICE);
		printf("%s\n", line);
	}
	return 0;
}

int getlines(char s[], int lim)
{
	int i, c, flagSpace;
	flagSpace = 0;
	for (i = 0; i <= lim - 1 && (c = getchar()) != '/' && c != '\n'; ++i)
	{
		if (c == ' ' || c == '\t')
		{
			if (flagSpace == 0)
			{
				s[i] = c;
				flagSpace = 1;
			}
			else
				--i;
		}
		else
		{
			s[i] = c;
			flagSpace = 0;
		}
	}
	s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void slice(char s[], int lim)
{
	int i, j;
	i = j = 0;
	while (s[i] != '\0')
	{
		for (j = MAXSLICE; (s[i + j] != ' ' && s[i + j] != '\t') && ((j + i) > i); --j);
		if (j != 0)
			s[j+i] = '\n';
		++i;
		i+=j;
		j = 0;
	}

	return;
}