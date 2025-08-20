#include <stdio.h>
int main(){
    int money;
    int discount;
    printf("What is your purchase amount? : ");
    scanf("%d",&money);
    if(money <=5000){
        discount = money;
    }
    else if(money > 5000 && money<=10000){
        discount = money - 0.05 * money;
    }
    else if(money > 10000){
        discount = money - 0.15 * money;
    }
    printf("Pay : %d amount saved : %d",discount,money-discount);
    return 0;
}