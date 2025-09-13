#include<stdio.h>
#include <stdlib.h>
int main() {
      int *arr1 = (int *)malloc(3 * sizeof(int));
      arr1[0] = 10;
      arr1[1] = 20;
      arr1[2] = 30;
      int *arr2 = arr1;
      free(arr2);
     printf("%d", arr1[0], arr1[1]);
     free(arr1);
     return 0;
 }