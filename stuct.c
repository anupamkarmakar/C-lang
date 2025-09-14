#include <stdio.h>
#include <string.h>
struct Students{
    char name[100];
    int marks;
};
int main(){
    struct Students S[5];
    printf("Enter tha name of students and obtained marks: ");
    for(int i=0;i<5;i++){
        scanf("%s",S[i].name);
        scanf("%d",&S[i].marks);
    }
    int max=-1,index=-1;
    for(int i=0;i<5;i++){
        if(S[i].marks>max){
            max=S[i].marks;
            index=i;
        }
    }
    printf("The highest marks is %d and obtained by %s",max,S[index].name);

}