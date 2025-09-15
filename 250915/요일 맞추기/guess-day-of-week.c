#include <stdio.h>

int main() {
    int m1, d1, m2, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    
    char *day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int count = 0;
    char *day_count;


    if (m1==m2){

        count += d2 - d1;
    
    }

    else if(m1 < m2){
    for (int i = m1; i <= m2; i++){
        if (i == m1){
            count += month[i] - d1;
        }
        else if (i == m2)
            count += d2; 
        else
            count += month[i];    
    }
    }

    else {
        for (int i = m2; i <= m1; i++){
            if (i == m2){
                count += -d2;
            }
            else if (i == m1)
                count += -(month[i] - d1); 
            else
                count += -month[i];    
    }
    }

    int idx = count % 7;
    if (idx < 0)
        idx += 7;
    day_count = day[idx];
    printf ("%s", day_count);

    // Please write your code here.
    
    return 0;
}