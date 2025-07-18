// array of strings
// strings is an array of characters so to make an array of strings we need to make a 2D array
#include <stdio.h>
int main(){
    char fruit[][50] = {"Apple","Banana","Mango"}; //50 is the max num of characters in a string
    int size = sizeof(fruit)/sizeof(fruit[0]);
    for(int i = 0 ; i < size ; i++){
        printf("%s\n",fruit[i]);
    }
    return 0;
}