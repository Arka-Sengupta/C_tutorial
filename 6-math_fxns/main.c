#include <stdio.h>
#include <math.h>

int main() {
    double x = 9;
    x = sqrt(x);
    printf("Square root: %.2f\n", x);

    x = pow(x, 3);
    printf("Cube of sqrt: %.2f\n", x);

    float y = 3.21;
    y = round(y);
    printf("Rounded: %.2f\n", y);

    y = ceil(y);  // rounded up
    printf("Ceil: %.2f\n", y);

    y = floor(y); // rounded down
    printf("Floor: %.2f\n", y);

    //abs() gives the absolute value
    // for natural log we use log(), similarly for trigs we have sin(), cos(), tan() , sec(), cosec() and cot()

    return 0;
}
