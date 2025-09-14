#include <stdio.h>
int main(){
    float cel,fah;
    printf("Enter the temperature in Fahrenheit scale : ");
    scanf("%f",&fah);
    cel = (5.0/9.0)*(fah-32);
    //cel = (5*(fah-32))/9;
    printf("In celsius scale, the temp is %.2f degree celsius",cel);
    return 0;

}