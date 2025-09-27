#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    int n = 5;
    arr = (int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed");
    }
    for(int i=0;i<n;i++){
        printf("Enter %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
    free(arr);
}