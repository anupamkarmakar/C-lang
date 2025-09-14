#include <stdio.h>
#include <string.h>
int main(){
    char s1[100];
    int i=0,flag=1,length=0;

    printf("Enter a 1st string: ");
    fgets(s1,sizeof(s1),stdin);

    s1[strcspn(s1, "\n")] = '\0';

    while(s1[i]!='\0'){
        length++;
        i++;
    }
    for(i=0;i<length/2;i++){
        if(s1[i]!=s1[length-i-1]){
            flag=0;
            break;
        }
    }
    if (flag)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is Not a Palindrome.\n");
}