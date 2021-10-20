#include <stdio.h>

float max(float a, float b, float c, float d, float e);
float min(float v, float w, float x, float y, float z);

int main(void) {
    float n1, n2, n3, n4, n5, MAX, MIN;
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);

    MAX = max(n1, n2 , n3, n4, n5);
    MIN = min(n1, n2 , n3, n4, n5);

    printf("%f\n", MAX);
    printf("%f\n", MIN);

    return 0;
}

float max(float a, float b, float c, float d, float e) {
    float arr_1[5] = {a, b, c, d, e};
    float Max = arr_1[0];

    for (int i = 1; i <= 4; i++) {
        if (arr_1[i > Max]) {
            Max = arr_1[i];
        }
    }

    return Max;
}

float min(float v, float w, float x, float y, float z) {
    float arr_2[5] = {v, w, x, y, z};
    float Min = arr_2[0];

    for (int j = 1; j <= 4; j++) {
        if (arr_2[j] < Min) {
            Min = arr_2[j];
        }
    }

    return Min;
}