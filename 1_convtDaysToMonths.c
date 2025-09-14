#include <stdio.h>
int main(){
    int days,months,remain;
    printf("Enter number of days : ");
    scanf("%d",&days);
    months = days/30;
    remain = days%30;
    printf("Days %d = %d months and %d days",days,months,remain);
    getchar();
    getchar();
    return 0;
}