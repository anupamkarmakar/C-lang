#include <stdio.h>
int reverse(int x){
    int rev=0,i,ld;
    while(x>0){
        ld=x%10;
        rev=rev*10+ld;
        x/=10;
    }
    return rev;
}
int main(){
    int n;
    printf("Enter a 5 digit number: ");
    scanf("%d",&n);
    if(n<10000 || n>100000) {
        printf("please enter 5 digits number!!!\n");
        return 0;
    }
    printf("Reverse of %d is %d\n",n,reverse(n));
    return 0;
}