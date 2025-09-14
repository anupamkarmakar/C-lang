#include <stdio.h>
int main(){
    char source[100],dest[100];
    int i=0;
    printf("Enter a string:");
    fgets(source, sizeof(source),stdin);

    while(source[i]!='\0'){
        dest[i]=source[i];
        i++;
    }
    dest[i]='\0';
    printf("Copied string is : %s",dest);
}