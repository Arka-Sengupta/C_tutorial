#include <stdio.h>
union Data {// Define a union
    int i;
    float f;
    char str[20];
};
int main() {
    
     union Data data;
    // Assign an integer value
    data.i = 10;
    printf("data.i : %d\n", data.i);

    // Assign a float value (this overwrites the integer value)
    data.f = 220.5;
    printf("data.f : %.1f\n", data.f);

    // Assign a string (this overwrites the float value)
    // strcpy(data.str, "C Programming");
    // printf("data.str : %s\n", data.str);
    return 0;
}
