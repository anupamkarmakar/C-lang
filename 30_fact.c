#include <stdio.h>
double factorial(int n){
    double fact=1;
    if(n==0) return 1;
    return factorial(n-1)*n;
}
int main(){
    int n=5;
    
    factorial(n);
    printf("%.2lf",factorial(n));

}