#include <stdio.h>
int main(){
    char s1[100],s2[100];
    int i=0,flag=1;
    printf("Enter a 1st string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter a 2nd string: ");
    fgets(s2,sizeof(s2),stdin);

    while(s1[i]!='\0' || s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            flag=0;
            break;
        }
        i++;
    }
    if(flag) printf("Str are equals");
    else printf("Not equals");
}