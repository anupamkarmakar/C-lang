#include <stdio.h>
int main(){
    int x,y,ans=1;
    printf("Enter base: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&y);

    for(int i=1;i<=y;i++){
        ans=ans*x;
    }
    printf("%d\n",ans);

    return 0;
}