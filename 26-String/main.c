#include <stdio.h>
#include<string.h>
int main(){
    char str1[10] = "Hello";
    char str2[10] = " World";
    printf("%d\n",strlen(str1));//prints lenght of the string
    strcat(str1,str2);          //concats the two strings together
    printf("%s\n",str1);
    return 0;
}