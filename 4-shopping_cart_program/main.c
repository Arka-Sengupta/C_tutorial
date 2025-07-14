#include <stdio.h>
int main(){
    char item[30] = "";
    float price = 0.0f;
    int qty = 0;
    double sum = 0.0;
    printf("What item would you like to buy : ");
    fgets(item, sizeof(item), stdin);
    printf("What is the price of each? : $");
    scanf("%f",&price);
    printf("How many would you like : ");
    scanf("%d",&qty);
    getchar();
    sum = qty * price;
    printf("You have brought %d %s\n",qty,item);
    printf("The total is : $%.2lf",sum);
    return 0;
}