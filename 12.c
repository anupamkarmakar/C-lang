#include <stdio.h>
int main(){
    int n,flag=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++){
        if(n%i==0) flag=0;
    }
    if(flag) printf("Prime Number");
    else printf("Composite");
    return 0;
}