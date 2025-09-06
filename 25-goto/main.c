#include <stdio.h>
int main(){
    int age;
    printf("Write your age: ");
    scanf("%d",&age);
    if(age<18){
        goto NoVote;
    }else{
        goto Vote;
    }
    Vote:
        printf("Elligible to vote");
        return 0;
    NoVote:
        printf("Not elligible to vote");
        return 0;
}