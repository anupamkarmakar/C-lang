#include <stdio.h>
int main(){
    char s1[100];
    int i;
    printf("Enter a string: ");
    scanf("%s",s1);
    
    
    for(i=0;s1[i]!='\0';i++);
    printf("size of string is %d",i);  
    return 0;
}