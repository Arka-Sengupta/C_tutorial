#include <stdio.h>
#include <string.h>
int main(){
    const int MAX= 3; //taking max to max 3 employee entries
    int employeeID[MAX];
    char employeeNames[MAX][20];
    float employeeSalaries[MAX];
    for (int i=0; i< MAX;i++){
        scanf("%d",&employeeID[i]);
        scanf(" %19s",employeeNames[i]);
        scanf("%f",&employeeSalaries[i]);
    }
    printf("\n\n");
    printf("%5s %-20s %10s\n","ID","Name","Salary");
    printf("-------------------------------------\n");
    for (int i = 0; i < MAX; i++) {
        printf("%5d %-20s %10.2f\n", employeeID[i], employeeNames[i], employeeSalaries[i]);
    }
}
