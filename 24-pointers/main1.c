#include <stdio.h>
int main(){
    int a = 98;
    int *p = &a;//referencing a pointer
    printf("%p\n",*p);
    printf("%d\n",*p);
    int value = *p; //dereferencing a pointer
    printf("%d",value);
    return 0;
}