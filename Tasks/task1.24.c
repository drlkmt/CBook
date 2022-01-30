#include <stdio.h>

#define MAXLINE 100000 // hui znaet

int getlines(char s[], int lim);
int checkerror(char s[]);

int main()
{
	char line[MAXLINE];
	getlines(line, MAXLINE);
	printf("%s", line);
	checkerror(line);

	return 0;
}

int getlines(char s[], int lim) //функция по считываняю строк
{
	int i, c, cx;
	cx = 0;
	for (i = 0; i < lim  && (c = getchar()) != EOF; ++i)//loh
	{
		if(c == '/' && s[i - 1] == '/')
		{
			if(s[i-2] == ' ')
				i -= 2;
			else
				i -= 1;
			c = '\n';
			while(getchar() != '\n');
		}

		if((c == ' ' && s[i - 1] == ' ') || (c == '\t' && s[i - 1] == '\t') || (c == '\n' && s[i - 1] == '\n'))
		{
			while ((c = getchar()) == ' ' || c == '\t' || c == '\n');
		}

		if(c == '\t')
		{
			i--;
		}
		else
		{
			s[i] = c;
		}
	}
	s[--i] = '\0';
	return i;
}

int checkerror(char s[])
{
	int figureOpen, figureClose, squareOpen, squareClose, circleOpen, circleClose, dots;
	figureOpen = figureClose = squareOpen = squareClose = circleOpen = circleClose = dots = 0;
	for(int i = 0; s[i] != '\0'; ++i)
	{
		switch (s[i])
		{
			case '{':
				figureOpen++;
			case '}':
				figureClose++;
			case '[':
				squareOpen++;
			case ']':
				squareClose++;
			case '(':
				circleOpen++;
			case ')':
				circleClose++;
			case ';':
				dots++;
		}
	}
	printf("\n%d\n", dots);
}