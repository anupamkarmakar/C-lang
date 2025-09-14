#include <stdio.h>
int swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    // *a=*a^*b; // 5^6
    // *b=*a^*b; // 5^6^6=5^0=5
    // *a=*a^*b; //5^6^5=6^0=6
}
int main(){
    int a=5;
    int b=6;
    printf("a: %d,b: %d\n",a,b);
    swap(&a,&b);
    printf("a: %d,b: %d",a,b);
}