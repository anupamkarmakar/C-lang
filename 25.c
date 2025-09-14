#include <stdio.h>
int main(){
    char s1[100],s2[100],s3[100];
    int i,j,ln;

    printf("Enter 1st string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter 2nd string: ");
    fgets(s2,sizeof(s2),stdin);
    
    for(i=0;s1[i]!='\0';i++);
    ln=i-1;
    for(i=0;s1[i]!='\0';i++){
        s3[i]=s1[i];
    }
    i--;
    for(j=0;s2[j]!='\0';j++){
        s3[i++]=s2[j];
    }
    printf("%s",s3);
    return 0;
}