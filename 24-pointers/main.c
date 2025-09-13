//pointer is a variable which stores the memory address of other variables
#include <stdio.h>
int main(){
    int age;
    printf("%p\n",&age); //returns memory address of age
    int *pAge = &age; //making a pointer
    printf("%p\n",pAge); //so the pointer got the same address
    return 0;
}
//this is a comment