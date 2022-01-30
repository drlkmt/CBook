#include <stdio.h>

#define MAXLINE 1000 // hui znaet

int getlines(char s[], int lim);
void clearComments(char s[]);

int main()
{
	char line[MAXLINE];
	int len;
	while((len = getlines(line, MAXLINE)) > 0)
	{
		clearComments(line); //отчистка
		printf("%s", line);
	}
	return 0;
}

int getlines(char s[], int lim) //функция по считываняю строк
{
	int i,c;
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n';++i)
		s[i] = c;
	if(c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

void clearComments(char s[])
{
	int i, flag;
	flag = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if(flag == 1)
			s[i] = 0;

		if(s[i] == '/' && s[++i] == '/' && s[--i] != '"' && s[i+2] != '"' && flag == 0)
		{
			flag = 1;
			s[i] = '\n';
		}
	}
}
