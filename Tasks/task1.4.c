#include <stdio.h>

int main() {
    float fahr, celsiuc;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsiuc = lower;

    printf("Celsiuc to fahringates\n");

    while (celsiuc <= upper)
    {
        fahr = celsiuc / (5.0 / 9.0) + 32;
        printf("%3.0f\t%6.1f\n", celsiuc, fahr);
        celsiuc += step;
    }
}
