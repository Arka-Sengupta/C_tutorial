// special tokens that begin with the % sign
#include <stdio.h>
int main(){
    int age = 19;
    float price = 45.23;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Arka";
    printf("%d\n",age);
    printf("%.1f\n",price);
    printf("%.2f\n",pi);
    printf("%c\n",currency);
    printf("%s\n",name);
    return 0;
}