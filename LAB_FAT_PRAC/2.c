#include<stdio.h>
int main(){
    int n,count=0;
    int arr[100],updated[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>35){
            updated[count] = arr[i];
            count++;
        }
    }
    if(count!=0){
        printf("List of marks after deleting below 35:");
        for(int i = 0;i<count;i++){
            printf("%d ",updated[i]);
        }
    }else{
        printf("All students failed with marks below 35");
    }
    
    return 0;
}