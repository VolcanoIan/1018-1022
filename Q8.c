#include <stdio.h>
#include <string.h>

int main(void) {
    int n, length = 1, sum = 0;
    scanf("%d", &n);

    while (n / 10 > 0) {
        sum += n % 10;
        n /= 10;   
        length += 1;    
    }
    sum += n % 10;
        
    printf("%d\n", length);
    printf("%d\n", sum);

    return 0;    
}