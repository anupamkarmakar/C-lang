#include <stdio.h>
int x=11,y=99;

void swap(){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    
    printf("Before Swap: x=%d,y=%d\n",x,y);
    int x=17,y=65;
    swap();
    printf("After swap: x=%d,y=%d\n",x,y);
}
