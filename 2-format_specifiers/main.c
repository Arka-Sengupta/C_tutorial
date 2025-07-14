// special tokens that begin with the % sign
#include <stdio.h>
int main(){
    int age = 19;
    int num1 = -23;
    int num2 = 23;
    float price = 45.23;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Arka";
    printf("%5d\n",age);  //it means number of spaces before it, if we wrote -5 it would have meant 5 spaces after the number
    printf("%05d\n",age); //replaces the spaces with 0s
    printf("%+d\n",num1); //it would show -23
    printf("%+d\n",num2); //it would show +23
    printf("%.1f\n",price);
    printf("%.2lf\n",pi);     //.2f also works but during user input we take lf for doubles so for consitency we are taking lf
    printf("%c\n",currency);
    printf("%s\n",name);
    return 0;
}
//didnt covered arithmetic ops since I know