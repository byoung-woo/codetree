#include <stdio.h>

int main() {
    int m1, d1, m2, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    
    char *day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    // 1월 1일 기준으로 차이를 계산 

    int start = d1, target = d2;

    for (int i = 1; i < m1; i++) start += month[i];
    for (int i = 1; i < m2; i++) target += month[i];

    int count = target - start;

    // 음수 보정
    int idx = count % 7;
    if (idx < 0) idx += 7;

    printf("%s\n", day[idx]);

    // Please write your code here.
    
    return 0;
}