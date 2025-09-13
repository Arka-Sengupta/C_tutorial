//pointer to a pointer
#include <stdio.h>
int main(){
    int a =10;
    int *ap;
    int **app;
    ap = &a;
    app = &ap;
    printf("Address of a : %d\n",ap);
    printf("Address of ap : %d\n",app);
    return 0;
}