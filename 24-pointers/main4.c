// pointer arithmetic
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &arr[0];
    printf("Value : %d\n",*p);
    printf("Address : %d\n",p);
    p++;
    printf("\n");
    printf("Value : %d\n",*p);
    printf("Address : %d\n",p);
    return 0;
}