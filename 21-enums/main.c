#include <stdio.h>
/*
enum Day{
        SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY  //By declaring these enum C is assigning SUNDAY = 0, MONDAY = 1 etc. unless we give some like SUNDAY = 2 etc
    };
int main(){
    // enum is an user defined data type that consists of a set of named integer constants. 
    enum Day today = MONDAY;
    printf("%d",today);

    return 0;
}
    */
//if we use typedef before enum keyword we wont need to write enum everytime

typedef enum{
    SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY
}Day;
int main(){
    Day today = SUNDAY;
    printf("%d",today);
    return 0;
}