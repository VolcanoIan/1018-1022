#include <stdio.h>

int main(void) {
    int n1, n2, GCD, LCM, n1_origin, n2_origin;
    scanf("%d %d", &n1, &n2);
    n1_origin = n1;
    n2_origin = n2;

    while (n1 > 0 && n2 > 0) {
        if (n1 > n2) {
            n1 = n1 % n2;
        }
        else {
            n2 = n2 % n1;
        }

        if (n1 == 0) {
            GCD = n2;
        }
        else {
            GCD = n1;
        }
    }
    LCM = (n1_origin / GCD) * (n2_origin / GCD) * GCD;
    
    printf("%d\n", GCD);
    printf("%d\n", LCM);

    return 0;    
}