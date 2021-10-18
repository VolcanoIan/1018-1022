#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i = 3;
    int yes = 1;
    scanf("%d", &n);

    if (n != 1) {
        if ((n % 2) == 0) {
            printf("%s\n", "NO");
        }
        else {
            while (i < n) {
                if (n % i != 0 && i != n) {
                    i += 2;
                }
                else if (n % i == 0 && i != n) {
                    yes = 0;
                    break;
                }
                else if (n % i == 0 && i == n) {
                    break;
                }
            }
            printf("%s\n", yes ? "YES":"NO");
        }
    }
    else {
        printf("%s\n", "NO");
    }

    return 0;
}