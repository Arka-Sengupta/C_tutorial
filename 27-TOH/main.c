#include <stdio.h>
void TOH(int n, char A, char C, char B){
    if(n==0){return;}
    TOH(n-1,A,B,C);//moving n-1 elements from A to B keeping C as aux
    printf("moving one disc from %c to %c\n",A,C);//moving the larger disc from A to C
    TOH(n-1,B,C,A);//moving the rest of the n-1 discs from B to C keeping A as aux
}
int main(){
    int n;
    printf("Input the number of discs you want in A : ");
    scanf("%d",&n);
    TOH(n,'A','C','B');
    return 0;
}