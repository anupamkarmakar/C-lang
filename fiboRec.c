#include <stdio.h>
int fabo(int x){
    if(x<=2) return 1;
    else return fabo(x-1)+fabo(x-2);
}
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",fabo(i));
    }
    return 0;
}