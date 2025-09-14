#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float r1,r2,D;
    printf("Enter the 3 coefficient of the quadric equation: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==0 && b==0) printf("No solution\n");
    else if(a==0) printf("The solution is %f\n",(float)-b/c);
    else{
        D=(b*b)-(4*a*c);
        if(D<0) printf("There are no real roots\n");
        else printf("The roots are %.2f and %.2f\n",r1=(-b+sqrt(D))/(2*a),r2=(-b-sqrt(D))/(2*a));
    }
}