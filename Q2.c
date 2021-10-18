#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= number; j++) {
            printf("%d\t", j * i);
        }
        printf("\n");
    }

    return 0;
}