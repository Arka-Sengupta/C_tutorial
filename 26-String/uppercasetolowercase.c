#include <stdio.h>
#include <string.h>
void UpperToLower(char string1[20]){
    int len;
    len = strlen(string1);
    for(int i = 0 ; i < len ; i++){
        if(string1[i]>='A' && string1[i]<='Z'){
            string1[i] = string1[i] + 32;
        }
    }
    printf("The modified String is %s",string1);
}
int main(){
    char str[20];
    printf("Enter your string : ");
    scanf("%s",&str);
    UpperToLower(str);
    return 0;
}