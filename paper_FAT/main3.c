#include<stdio.h>
#include <stdbool.h>
struct Employees{
    char name[10];
    int ID;
    bool contactInfo;
    union Contact{
        char mob[12];
        char email[30];
    }con;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Employees emp[n];
    for(int i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%9s", emp[i].name);
        printf("Enter ID: ");
        scanf("%d", &emp[i].ID);
        printf("Enter 0 for mobile and 1 for email: ");
        scanf("%d",&emp[i].contactInfo);
        if(emp[i].contactInfo==0){
            printf("Enter Mobile number: ");
            scanf("%s",&emp[i].con.mob);
        }else{
            printf("Enter Mobile number: ");
            scanf("%s",&emp[i].con.mob);
        }
    }
    
}