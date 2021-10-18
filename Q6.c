#include <stdio.h>

int main(void) {
    int n;
    double sum, total = 0;
    scanf("%d", &n);

    for (double i = 1; i <= n; i++) {
        sum = 1 / ((i * 2 - 1) * (i * 2));
        total += sum;
    }
    printf("%.16lf\n", total);

    return 0;
}