#include <stdio.h>
int main(){
    int a,arr[100];
    float b;
    char ch;
    long int c;
    long long int d;
    unsigned int e;
    long unsigned int f;

    printf("%lu bytes\n",sizeof(a));
    printf("%lu bytes\n",sizeof(b));
    printf("%lu bytes\n",sizeof(c));
    printf("%lu bytes\n",sizeof(d));
    printf("%lu bytes\n",sizeof(e));
    printf("%lu bytes\n",sizeof(f));
    printf("%lu bytes\n",sizeof(arr));
    printf("%lu bytes\n",sizeof(ch));
    return 0;
}