#include <stdio.h>
int main(){
    char str[100];
    int length=0;
    printf("Enter a string:");
    fgets(str, sizeof(str),stdin);

    while(str[length]!='\0'){
        length++;
    }
    printf("%d",length);
}