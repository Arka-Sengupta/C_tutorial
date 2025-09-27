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
        printf("Enter %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("[ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
    n = 10;
    arr = (int*)realloc(arr,n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("\nEnter %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("[ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
    free(arr);
}