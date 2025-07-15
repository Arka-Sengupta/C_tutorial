#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    double radius = 0.0;
    double area = 0.0;
    printf("Enter the radius of the circle : ");
    scanf("%lf",&radius);
    area = 3.14 * pow(radius,2);
    printf("The area of the circle is : %.2lf",area);
    return 0;
}