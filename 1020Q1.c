#include <stdio.h>

int main(void) {
    int n, k;
    unsigned long int sum_top = 1, sum_btm1 = 1, sum_btm2 = 1;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        sum_top *= i;
    }
    for (int j = 1; j <= k; j++) {
        sum_btm1 *= j;
    }
    for (int l = 1; l <= (n - k); l++) {
        sum_btm2 *= l;
    }

    printf("%u\n", sum_top / (sum_btm1 * sum_btm2));

    return 0;
}