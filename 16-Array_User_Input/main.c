#include <stdio.h>
int main(){
    int scores[5] = {0};
    int size = sizeof(scores)/sizeof(scores[0]);
    for (int i = 0 ; i < size ; i++){
        printf("Enter %dth element : ",i+1);
        scanf("%d",&scores[i]);
    }
    printf("\nThe array is : \n");
    printf("[ ");
    for(int j = 0 ; j < size ; j++){
        printf("%d ",scores[j]);
    }
    printf("]");
    return 0;
}