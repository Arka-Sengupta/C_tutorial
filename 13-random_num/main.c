//they are pseudo-random numbers ie.  they appear random but are actually determined by a mathematical formula

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// int main(){
//     srand(time(NULL));
//     printf("%d\n",RAND_MAX);
//     printf("%d",rand());
//     return 0;
// }

int main(){
    srand(time(NULL));
    int min = 1; //min of the random num
    int max = 10; // max of the random num
    for(int i = 0 ; i < 10 ; i++){
        int randomNum = (rand() % max) + min;
        printf("%d\n",randomNum);
    }
    return 0;
}
