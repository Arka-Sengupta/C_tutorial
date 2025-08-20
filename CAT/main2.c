#include <stdio.h>
int main(){
    int mat[3][3];
    int trace = 0;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter (%d,%d) element : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    for(int i = 0 ; i < 3 ; i++){
        trace += mat[i][i];
    }
    printf("The trace is : %d",trace);
    return 0;
}