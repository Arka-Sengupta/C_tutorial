/*
typedef is a reserved keyword in C that gives an existing keyword a nickname 
it helps to improve code readabilty
typedef existing_type new_name
must be done outside main function
*/

#include <stdio.h>
int main(){
    typedef int num;
    num x = 5;
    num y = 4;
    num z = x + y;
    printf("%d",z);
}