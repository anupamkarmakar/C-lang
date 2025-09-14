#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("%d %d\n",*a,*b);
}
int main(){
    int a=3,b=9;
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}