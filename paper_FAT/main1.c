#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    char *arr;
    printf("Write array size = ");
    scanf("%d",&n);
    arr = (char*)malloc(n * sizeof(char));
    char* ptr = arr;
    for(int i=0;i<n;i++){
        scanf("%c",(ptr+i));
    }
    for(int i=0;i<n;i++){
        printf("%d ,",(int)(*(ptr+i)));
    }
}