#include <stdio.h>

void SelectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int min =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
}
int main(){
    int a[] = {5, 3, 1, 4, 2};
    int n = 5;
    SelectionSort(a,n);
}