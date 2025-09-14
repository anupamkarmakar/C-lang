#include <stdio.h>

int largest(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

int main(){
    int n;
    printf("Enter a size of an array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("The largest element of an array is %d\n",largest(&arr[n],n));
    return 0;
}