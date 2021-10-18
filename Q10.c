#include <stdio.h>

unsigned DecToBin(int n);

int main(void) {
    unsigned int number;
    scanf("%d", &number);    
    printf("%08u\n", DecToBin(number));

    return 0;
}

unsigned int DecToBin(int n) {
    int i = 1, reminder;
    unsigned int binN = 0;
    
    while (n != 0) {
        reminder = n % 2;
        n = n / 2;
        binN += reminder * i;
        i *= 10;
    }
    
    return binN;
}