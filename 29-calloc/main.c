#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr;
    int n;
    int* ptr;
    ptr = &n;
    printf("Enter the size of array: ");
    scanf("%d",ptr);
    arr = (int*)calloc(n,sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("Enter %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is : [ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
    free(arr);
    return 0;
}
// The difference between malloc and calloc is in malloc the variables are initialised to garbage values while in
// calloc the variables are initialized to 0