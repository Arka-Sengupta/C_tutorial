#include <stdio.h>
int main(){
    int mat_1[][3] = {{1,2,3},
                       {4,5,6},
                       {7,8,9}};
    printf("%d\n",mat_1[0][1]);       //output would be 2
    printf("\n");

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d ",mat_1[i][j]);
        }
        printf("\n");
    }
    return 0;
}