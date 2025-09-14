#include <stdio.h>
void isPrime(int n){
    int flag=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) flag=0;
    }
    if(flag) printf("%d ",n);
    
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The prime numbers are: ");
    for(int i=2;i<=n;i++){
        isPrime(i);
    }
    
    return 0;
}