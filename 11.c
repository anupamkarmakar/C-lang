#include <stdio.h>
long long int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,sign=-1;
    float ans=0.0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=(2*n-1);i=i+2){
        ans=ans+(1.0/fact(i))*sign;
        sign*=(-1);
    }
    printf("%f\n",ans);
    return 0;
}