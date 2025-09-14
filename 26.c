#include <stdio.h>
int main(){
    char s1[100];
    int i,len,j;
    printf("Enter: ");
    scanf("%s",s1);

    for(i=0;s1[i]!='\0';i++);
    printf("%d\n",i);
    i--;
    j=0;
    while(j<i){
        if(s1[j]!=s1[i]){
            printf("not palindrome");
            return 0;
        }
        j++,i--;
    }
    printf("Palindrome");
}