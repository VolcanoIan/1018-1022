#include <stdio.h>

int main(void) {
    int number, sum = 0, total = 0, i = 1;
    scanf("%d", &number);

    while (i <= number) {
        sum = i * (i + 1);
        total += sum;
        i += 1;
    }
    printf("%d\n", total);

    return 0;
}