#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int time=0;
    int minute, hour,day = 11;

    while (1){
        if(day==A && hour==B && minute==C)
            break;
        minute++;
        time++;
        if (minute == 60){
            hour++;
            minute=0;
        }
        if (hour == 24){
            day++;
            hour=0;
        }
    }

    printf ("%d", time);
    return 0;
}