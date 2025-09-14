#include <stdio.h>
int main(){
    float a,b;
    printf("Enter two number: ");
    scanf("%f %f",&a,&b);
    printf("The sum of %.2f and %.2f is %.2f\n",a,b,a+b);
    return 0;
}