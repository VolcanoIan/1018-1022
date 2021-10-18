#include <stdio.h>

int main(void) {
    int n1, n2, tmp, GCD, LCM;
    scanf("%d%d", &n1, &n2);
    tmp = n1 % n2;

    while (tmp != 0) {
        if (n2 % tmp != 0) {
            tmp = n2 % tmp;
        }
        else {
            GCD = tmp;
            break;
        }
    }
    LCM = (n1 / GCD) * (n2 / GCD) * GCD;
    
    printf("%d\n", GCD);
    printf("%d\n", LCM);

    return 0;    
}