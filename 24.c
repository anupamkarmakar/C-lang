#include <stdio.h>
int main(){
    char s1[100],s2[100];
    int i,j;

    printf("Enter 1st string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter 2nd string: ");
    fgets(s2,sizeof(s2),stdin);

    for(i=0,j=0;(s1[i]!='\0'||s2[j]!='\0');i++,j++){
        if(s1[i]!=s2[j]){
            printf("Two strings are not equal\n");
            return 0;
        }
    }
    printf("Equal\n");
    return 0;
}