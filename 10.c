#include <stdio.h>
long long int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factorial value of %d is %lld\n",n,fact(n));
    return 0;
}