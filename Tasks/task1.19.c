#include <stdio.h>

#define MAXLINE 100

int getlines(char s[], int lim);
int reverse(char s[], char rev[], int i);

int main()
{
	char line[MAXLINE];
	char reverseline[MAXLINE];
	int len = 0;

	while ((len = getlines(line, MAXLINE)) > 0)
	{
		reverse(line, reverseline,len);
		printf("%s", reverseline);
	}

	return 0;
}

int getlines(char s[], int lim)
{

	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != '/' /* && c != '\n'*/; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int reverse(char s[], char rev[], int i)
{
	char cx;
	--i;
	for (int mi = i; mi >= 0; --mi)
	{
		rev[i-mi] = s[mi];

	}
	rev[++i] = '\0';
	return i;
}