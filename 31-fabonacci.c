#include <stdio.h>
/*void fibonacci(int n){
    int ft=0,st=1,rt=0,i;
    for(int i=1;i<=n;i++){
        printf("%d ",ft);
        rt=ft+st;
        ft=st;
        st=rt;
        
    }*/
   int fibonacci(int n){
    if(n==1) return 0;
    else if(n==2) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
   }

int main(){
    int n=10;
    printf("The fibonacci series is: ");
    for(int i=1;i<=n;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}