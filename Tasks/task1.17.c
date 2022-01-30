#include <stdio.h>

#define MAXLINE 10000
#define SUPREMUM 80

int getlines(char line[], int lim);

int main()
{
	char line[MAXLINE];
	int len = 0;
	while((len = getlines(line, MAXLINE)) > 0)
	{
		if(len > SUPREMUM) printf("\tYour line--> %s\n",line);
	}
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