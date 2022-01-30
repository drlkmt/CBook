#include <stdio.h>

int main() {
    double nc = 0;

    for (nc = 0; getchar() != 47; nc++);

    printf("%.0f\n", nc);
}