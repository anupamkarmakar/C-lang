#include <stdio.h>
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    float sum=0.0;
    for(i=1;i<=n;i++){
        sum=sum+(1.0/i);
    }
    printf("%.3f",sum);
    return 0;
}