#include <stdio.h>

int main(void) {
    unsigned long long total = 1;
    int i = 1, number;
    scanf("%d", &number);

    while (i <= number) {
        total *= i;
        i++;        
    }
    printf("%lld\n", total);
    
    return 0;
}