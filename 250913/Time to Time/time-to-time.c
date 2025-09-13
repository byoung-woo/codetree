#include <stdio.h>

int A, B, C, D;
int time=0;
int main() {
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    while (1){
        if (A==C && B==D)
            break;
        time++;
        B++;

        if (B == 60){
            A++;
            B=0;
        }

    }
    // Please write your code here.
    printf ("%d", time);

    return 0;
}