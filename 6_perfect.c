#include <stdio.h>
void isPerfect(int n){
    int i,sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) sum+=i;
    }
    if(sum==2*n) printf("Perfect Number");
    else printf("None");
}
int main(){
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    isPerfect(n);
    
    return 0;
}