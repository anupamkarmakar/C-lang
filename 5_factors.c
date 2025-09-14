#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    long long int fact=1,i;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%lld",fact);
    return 0;
}