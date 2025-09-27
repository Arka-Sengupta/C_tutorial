// Passing by Value

// #include<stdio.h>
// struct value{
//     int x;
//     int y;
// };
// void display(struct value s1){
//     printf("x=%d, y=%d",s1.x,s1.y);
//     s1.x = 100;
//     s1.y = 200;
//     printf("\nModified values : x=%d and y = %d",s1.x,s1.y);
// }
// int main(){
//     struct value s = {10,20};
//     display(s);
//     printf("\nAfter fxn call x:%d y:%d",s.x,s.y);
//     return 0;
// }


// passing the same question by reference
#include <stdio.h>
struct value{
    int x;
    int y;
};
void display(struct value *s1){
    printf("x=%d, y=%d",s1->x,s1->y);
    s1->x = 100;
    s1->y = 200;
    printf("\nModified values : x=%d and y=%d",s1->x,s1->y);
}
int main(){
    struct value s = {10,20};
    display(&s);
    printf("\nAfter fxn call x:%d and y:%d",s.x,s.y);
    return 0;
}

// As we are passing the address in the "Pass by reference" so the original s1 would get updated