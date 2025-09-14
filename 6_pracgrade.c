#include <stdio.h>
int main(){
  int marks;
  
  while(1){
    printf("Enter marks: ");
    if(scanf("%d",&marks)==1 && marks>=0 && marks<=100) break;
    else{
      printf("Invalid input! Please enter a valid number.\n");
      while(getchar()!= '\n');
    }
  }
  switch(marks/10){
    case 10:
    case 9: 
      printf("Grade O\n");
      break;
    case 8: 
      printf("Grade E\n");
      break;
    case 7: 
      printf("Grade A\n");
      break;

  }

}