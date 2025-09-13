#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);


    int diff = ((A * 24 * 60) + (B * 60) + C) - ((11 * 24 * 60) + (11 * 60) + 11);

    printf("%d", diff);


    return 0;
}