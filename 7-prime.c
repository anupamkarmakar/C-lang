#include <stdio.h>
void isPrime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
            if(n%i==0) count++;
        }
    if(count==2) printf("Prime Number");
    else printf("Composite Number");
}

int main(){
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    isPrime(n);
    
    
    return 0;
}