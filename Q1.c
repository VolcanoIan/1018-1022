#include <stdio.h>

int main(void) {
    int number, sum = 0;
    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}