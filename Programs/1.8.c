#include <stdio.h>

#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char dst[], char src[]);

int main()
{
	char line[MAXLINE];
	char longest[MAXLINE];
	int max, len;
	len = max = 0;

	while((len = getlines(line, MAXLINE)) > 0)
	{
		if(len > max)
		{
			max = len;
			copy(longest,line);
		}
	}
	if(max > 0)
		printf("%s", longest);
	return 0;
}

int getlines(char s[], int lim)
{
	int i, c;
	for (i = 0; i < lim - 1 && (c = getchar()) != '/' && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char dst[], char src[])
{
	for(int i = 0; (dst[i] = src[i]) != '\0'; ++i);
}