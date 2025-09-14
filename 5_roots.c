#include <stdio.h>
#include <math.h>
int main(){
  int a,b,c;
  float d,r1,r2;
  printf("Enter the value of a,b,c respectively: ");
  scanf("%d %d %d",&a,&b,&c);
  if(a==0 && b==0){
    printf("No solution");
    return 0;
  }
  if(a==0){
    printf("x=%.3f",-c/(float)b);
    return 0;
  }
  d= b*b-4*a*c;
  if(d<0) printf("There is no real root");
  else{
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("The roots are %.3f and %.3f",r1,r2);
  }
  return 0;
}