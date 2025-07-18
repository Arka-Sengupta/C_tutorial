#include <stdio.h>
int main(){
    //  (condition) ? value_if_true : value_if_false;
    int x = 5;
    int y = 6;
    int max = (x > y) ? printf("X is greater than Y") : printf("X is smaller than Y");
    return 0;
}