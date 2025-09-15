#include <stdio.h>
#include <string.h>
int main() {
    int m1, d1, m2, d2;
    char A[4];
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    scanf("%s", A);
    
    char *day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Please write your code here.
    
    int start = d1;
    int target = d2;

    for(int i = 1; i < m1; i++)
        start += month[i];

    for(int i = 1; i < m2; i++)
        target += month[i];

    int count = target - start;
    int day_count = 0;

    for (int i = 0; i <= count; i++){
        if (strcmp(day[i%7], A)==0)
            day_count++;
    }
    
    printf ("%d", day_count);
    return 0;
}