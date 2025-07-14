#include <stdio.h>
int main(){
    int age =0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[40] = "";
    printf("Enter your age : ");
    scanf("%d",&age); //&age is the memory location of age
    printf("Enter your GPA : ");
    scanf("%f",&gpa);
    getchar(); //required before input of a char
    printf("Enter your grade : ");
    scanf("%c",&grade);
    getchar();
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);  //fgets lets u input full name with whitespace, it has 3 params variable, size of it and that it is standard input
    printf("-----STUDENT DETAILS-----\n");
    printf("Your age is %d\n",age);
    printf("Your gpa is %.1f\n",gpa);
    printf("Your grade is %c\n",grade);
    printf("Your name is %s",name);
    return 0;
}