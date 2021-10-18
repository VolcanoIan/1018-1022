#include <stdio.h>

long long DecToBin(int n);

int main(void) {
    unsigned int number;
    scanf("%d", &number);    
    printf("%lld\n", DecToBin(number));

    return 0;
}

long long DecToBin(int n) {
    long long binN = 0;
    int reminder, i = 1;
    int array[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    while (n != 0) {
        reminder =  n % 2;
        n /= 2;
        array[9 - i] = reminder;
        printf("%d\n", array[9 - i]);
        i++;
    }
    return array;
}