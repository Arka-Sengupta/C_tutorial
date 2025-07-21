#include <stdio.h>
typedef struct{
    char model[50];
    int year;
    int price;
}Car;
int main(){

    Car cars[] = {{"Alto",2014,200000},{"WagonR",2019,500000},{"Baleno",2025,700000}};

    // Car car1 = {"Alto",2014,200000};
    // Car car2 = {"WagonR",2019,500000};  same thing as above
    // Car car3 = {"Baleno",2025,700000};
    // printf("%s %d Rs.%d\n",car1.model,car1.year,car1.price);
    // printf("%s %d Rs.%d\n",car2.model,car2.year,car2.price);
    // printf("%s %d Rs.%d\n",car3.model,car3.year,car3.price);

    int num = sizeof(cars)/sizeof(cars[0]);
    for(int i = 0 ; i < num ; i++){
        printf("%s %d Rs.%d\n",cars[i].model,cars[i].year,cars[i].price);
    }
    return 0;
}