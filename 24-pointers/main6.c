// pointer array or array of pointer
#include <stdio.h>
int main(){
    int a = 10, b=3,c=9;
    int *arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    printf("%d \n",arr[0]);//gives pointer location
    printf("%d \n",*arr[0]);//gives pointer value
    return 0;
}