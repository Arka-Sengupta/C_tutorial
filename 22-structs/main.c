//similar to objects in JS or dictionaries in Python
#include <stdio.h>
#include <stdbool.h>
struct Student {   //characteristics of a student
    char name[50];
    int age;        //we can also use typedef so inside main we wont need to write struct everytime
    float gpa;
    bool isFullTime;
};
int main(){
    struct Student stud1 = {"Arka",19,8.5,true}; 
    printf("%s\n",stud1.name);  //prints name of student 1
    printf("%s",(stud1.isFullTime)?"Yes":"No");
    return 0;
}