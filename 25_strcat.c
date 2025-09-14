#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[100],results[200];
    int i=0,j=0;
    printf("Enter a 1st string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter a 2nd string: ");
    fgets(s2,sizeof(s2),stdin);

    s1[strcspn(s1,"\n")]='\0';  //String Complement Span
    s2[strcspn(s2,"\n")]='\0';

    while(s1[i]!='\0'){
        results[i]=s1[i];
        i++;
    }
    while(s2[j]!='\0'){
        results[i]=s2[j];
        i++;
        j++;
    }
    results[i]='\0';
    printf("Concatenate string is : %s",results);
    return 0;
}