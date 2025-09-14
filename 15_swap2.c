#include <stdio.h>

int main(){
    int a=3,b=9;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n",a,b);
    return 0;
}