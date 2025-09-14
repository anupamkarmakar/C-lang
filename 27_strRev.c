#include <stdio.h>
#include <string.h>
int main(){
    char str[100],rev[100];
    int i=0,length=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    while(str[i]!='\0'){
        length++;
        i++;
    }
    for(i=0;i<length;i++){
        rev[i]=str[length-i-1];
    }
    printf("Reverse string is : %s",rev);

}
