#include <stdio.h>

int main(void) {
    int m1, d1, m2, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    int day=0;
    int year[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31};
    // Please write your code here.
    while(1){
        if (m1==m2 && d1==d2)
            break;
        
        day++;
        d1++;

        if (d1 > year[m1]){
            m1++;
            d1=1;
        }

    }
    printf("%d", day);
    return 0;
}