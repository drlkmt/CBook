#include <stdio.h>

int main() {
    float fahr, celsiuc;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsiuc = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsiuc);
        fahr += step;
    }
}
