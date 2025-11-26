// Matrix multiplication
#include<stdio.h>
int main(){
    #define SIZE 3
    int mat1[SIZE][SIZE];
    int mat2[SIZE][SIZE];
    int mat3[SIZE][SIZE];
    printf("Enter your first matrix: \n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter your second matrix: \n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("The multiplied matrix is : \n");
    for(int i = 0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            mat3[i][j] = 0;
            for(int k=0; k<SIZE;k++){
                mat3[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}