#include<stdio.h>
#include<stdlib.h>
int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a*b;
}
int divi(int a, int b){
    return a/b;
}
int main(){
    int(*operation)(int, int);
    operation = add;
    printf("Addition : %d\n",operation(6,3));
    operation = sub;
    printf("Subtraction : %d\n",operation(6,3));
    operation = mul;
    printf("Multiplication : %d\n",operation(6,3));
    operation = divi;
    printf("Division : %d",operation(6,3));
    return 0;
}