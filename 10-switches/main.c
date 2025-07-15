//switches are an alternative to use many if-else statements
#include <stdio.h>
int main(){
    int dayofweek = 0;
    printf("\nEnter a day of week : ");
    scanf("%d",&dayofweek);
    switch(dayofweek){
        case 1:
            printf("\nIt is monday");
            break;
        case 2:
            printf("\nIt is tuesday");
            break;
        case 3:
            printf("\nIt is wednesday");
            break;
        case 4:
            printf("\nIt is thursday");
            break;
        case 5:
            printf("\nIt is friday");
            break;
        case 6:
            printf("\nIt is saturday");
            break;
        case 7:
            printf("\nIt is sunday");
            break;
        default:
            printf("\n Please enter a valid day of week!");
    }
    return 0;
}