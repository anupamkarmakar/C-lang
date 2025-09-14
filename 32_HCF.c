#include <stdio.h>
int HCF(int a,int b){
    if(b==0) return a;
    else return HCF(b,a%b);
}
int main(){
    int a=17,b=2;
    printf("%d",HCF(a,b));
}