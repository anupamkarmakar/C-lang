#include <stdio.h>
#include <math.h>
int main(){
    int n,digit=0,sum=0,ld,m,real;
    printf("enter a number:");
    scanf("%d",&n);
    m=n;
    real=n;
    while(n>0){
        digit++;
        n/=10;
    }
    printf("%d\n",digit);
    printf("%d\n",m);
    while(m>0){
        ld=m%10;
        sum+=pow(ld,digit);
        m/=10;
    }
    printf("%d\n",sum);
    if(real==sum) printf("It is Armstrong Number");
    else printf("None");
    return 0;
}