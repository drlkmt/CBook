#include <stdio.h>

#define MAXLINE 100

int getlines(char s[], int lim);
int clearline(char s[], int i);

int main()
{
	char line[MAXLINE];
	int len = 0;

	while ((len = getlines(line, MAXLINE)) > 0)
	{
		printf("%s", line,len);
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
	return clearline(s, i);
}

int clearline(char s[], int i)
{
	while (i >= 0 && (s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9') && (s[i] < 'A' || s[i] > 'Z'))
	{
		s[i] = '\0';
		--i;
	}
	return i + 1;
}