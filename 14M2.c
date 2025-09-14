#include <stdio.h>
int main(){
    int a,b,i;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);

    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    printf("%d",a);
    return 0;
}