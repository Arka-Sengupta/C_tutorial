#include<stdio.h>
double factorial(int i){
    if(i<=1){
        return 1;
    }else{
        return i * factorial(i-1); //performing recursion
    }
}
int main(){
    int num = 0;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("The factorial of the number is : %.0lf",factorial(num));
    return 0;
}