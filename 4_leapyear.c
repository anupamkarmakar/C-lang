#include <stdio.h>
int main(){
    int y;
    printf("Enter a Year: ");
    scanf("%d",&y);
    if(y%100==0 && y%400==0) printf("Leap-year");
    else if(y%100!=0 && y%4==0) printf("leap-year");
    else printf("Not leap-year");
    return 0;
}