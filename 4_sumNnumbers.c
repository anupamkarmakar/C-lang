#include <stdio.h>
int add(int x){
    if(x==1) return 1;
    else return add(x-1)+x;
}
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    // for(i=1;i<=n;i++){
    //     sum+=i;
    // }
    printf("%d",add(n));
    return 0;
}