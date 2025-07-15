#include <stdio.h>
#include <math.h>
int main(){
    double principal = 0.0;
    double rate = 0.0;
    int time = 0;
    double SI = 0.0;
    double amount = 0.0;
    printf("What is the principle amount : ");
    scanf("%lf",&principal);
    printf("for how many years you would carry the loan : ");
    scanf("%d",&time);
    printf("What is the rate of interest : ");
    scanf("%lf",&rate);
    SI = principal * rate * time / 100;
    amount = principal + SI;
    printf("Your Interest adds up to : %.2lf\n",SI);
    printf("Your total amount adds up to : %.2lf",amount);
    return 0;
}