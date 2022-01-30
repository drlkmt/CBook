#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float toCelsiuc(int fahr);

int main()
{
	for(int i = LOWER; i < UPPER; i+=STEP)
		printf("%d %.1f\n", i, toCelsiuc(i));
	return 0;
}

float toCelsiuc(int fahr)
{
	return (5.0 / 9.0) * (fahr - 32);
}