#include <stdio.h>
int main(){
    int arr1[] = {20,23,5,4,56,8,765,3};
    // printf("%d\n",arr1); //would print the pointer
    printf("%d\n",arr1[0]);//would print the first element of the array
    printf("%d\n",arr1[4]);
    arr1[4] = 100;
    printf("%d\n",arr1[4]);
    printf("Size of array : %d\n",sizeof(arr1));
    printf("Size of first element of array : %d\n",sizeof(arr1[4]));
    int size = sizeof(arr1)/sizeof(arr1[0]);
    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}