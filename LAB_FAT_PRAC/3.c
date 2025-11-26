#include<stdio.h>
#include<string.h>
#define MAX_SUB 5
#define MAX_STR_LEN 20
struct student{
    int sid;
    int mks[MAX_SUB];
    char name[MAX_STR_LEN];
    char gen[MAX_STR_LEN];
};
void print_genderinfo(struct student *s,int n){
    int male,female=0;
    for(int i=0;i<n;i++){
        if(strcmp(s[i].gen,"male")==0){}
    }
}
void print_highest(){
}
int main(){
    int n;
    scanf("%d",&n);
    struct student *s = malloc(n * sizeof(struct student));
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].sid);
        for(int j =0; j<MAX_SUB;j++){
            scanf("%d",&s[i].mks[j]);
        }
        scanf("%s %s",&s[i].name,&s[i].gen);
    }


    
    return 0;
}