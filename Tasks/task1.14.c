#include <stdio.h>

#define ALLCOUNT 'z' - 'a' + '9' - '0' + 2

int main()
{
	int c, MAXSIZE;
	MAXSIZE = 0;
	int arrCount[ALLCOUNT];

	for (int i = 0; i < ALLCOUNT; ++i)
		arrCount[i] = 0;

	while ((c = getchar()) != '/')
	{
		if (c >= '0' && c <= '9') ++arrCount[c - '0'];
		else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			if (c >= 'a' && c <= 'z') ++arrCount[c - 'a' + '9' - '0' + 1];
			if (c >= 'A' && c <= 'Z') ++arrCount[c - 'A' + '9' - '0' + 1];
		}
	}

	for (int i = 0; i < ALLCOUNT; ++i)
	{
		if(arrCount[i] > MAXSIZE) MAXSIZE = arrCount[i];
	}

	for (int i = MAXSIZE; i > 0; --i)
	{
		for (int j = 0; j < ALLCOUNT; ++j)
		{
			if (arrCount[j] >= i) printf("#");
			else printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < ALLCOUNT; ++i)
	{
		if (i <= '9' - '0') putchar(i + '0');
		else putchar(i + 'a' - ('9' - '0') - 1);
	}
}