// Find the length of an inputted string without using strlen() function.

#include <stdio.h>
int main(){
    char s1[100];
    int i;
    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);
    
    
    for(i=0;s1[i]!='\0';i++);
    printf("size of string is %d\n",i-1);  //fgets keeps the newline(\n) at the end

    return 0;
}