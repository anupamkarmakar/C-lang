#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[100];
    int i,j;
    printf("Enter a string: ");
    fgets(s1,sizeof(s1),stdin);

    for(i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
    }
    s2[i]='\0';
    // for(i=0;s2[i]!='\0';i++){
    //     printf("%c",s2[i]);
    // }
    if (s1[strlen(s1)-1] == '\n') {
    s1[strlen(s1)-1] = '\0';
    }
    printf("%s",s2);
    return 0;
}