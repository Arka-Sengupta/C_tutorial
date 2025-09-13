//void pointer or generic pointer
#include <stdio.h>
int main(){
    int a = 10;
    float b = 2.3;
    char c = 'A';
    void *p;
    //casting pointer to integer pointer then dereferencing it
    p = &a;
    printf("%d\n",*(int*)p);
    //casting pointer to float pointer then dereferencing it
    p = &b;
    printf("%.1f\n",*(float*)p);
    //casting pointer to char pointer then dereferencing it
    p = &c;
    printf("%c\n",*(char*)p);
    return 0;
}