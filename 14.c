#include <stdio.h>
int main(){
    int a,b,HCF;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    for(int i=0;i<=a;i++){
        if(a%i==0 && b%i==0) HCF=i;
    }
    printf("%d",HCF);
    return 0;
}