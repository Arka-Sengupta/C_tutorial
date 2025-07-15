#include <stdio.h>
int main(){
    int age  = 0;
    int i = 0;
    while (i<3)
    {
          printf("\nEnter your age : ");
        scanf("%d",&age);
        if(age > 18){
            printf("You are eligible for voting!");
        }else if(age == 18){
            printf("You are just eligible for voting");
        }else{
            printf("You are not eligible for voting");
        }
        i++;
    }
    
    return 0;
}