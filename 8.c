#include <stdio.h>
int main(){
    int n,ft=1,st=1,next;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d ",ft);
        next=ft+st;
        ft=st;
        st=next;
    }
    return 0;
}