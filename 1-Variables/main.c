#include <stdio.h>
#include <stdbool.h> //Use when we need to include boolean datatypes
// variables in C are similar to that of JAVA
// Note that in C we dont have strings instead of strings we use an array of characters to represent strings
int age = 19;
float salary = 7.2f;
double cgpa = 8.5;
char char1 = 'A';
char char2 = 'B';
char name[] = "Arka Sengupta";
bool isOnline = true;//or we could have written bool isOnline = 1;
int main(){
    printf("You are %d years old\n",age);
    printf("Your salary is Rs.%f\n",salary);
    printf("Your cgpa is %f\n",cgpa);
    printf("The ASCII sum of '%c' and '%c' is %d\n", char1, char2, char1 + char2);
    printf("My name is %s\n",name);  // %s is used for strings
    printf("Is arka online : %d",isOnline);
    return 0;
}