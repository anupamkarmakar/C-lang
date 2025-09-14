#include <stdio.h>
int sum(int x){
    int add=0,i,ld;
    while(x>0){
        ld=x%10;
        add+=ld;
        x/=10;
    }
    return add;
}
int main(){
    int n;
    printf("Enter a 5 digit number: ");
    scanf("%d",&n);
    if(n<10000 || n>100000) {
        printf("please enter 5 digits number!!!\n");
        return 0;
    }
    printf("Sum of digits is %d",sum(n));
    return 0;
}