#include <stdio.h>
#include <string.h>
int main(){
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description) : ");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1) - 1] = '\0'; //removing input buffer
    printf("Enter a noun (animal or person) : ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun) - 1] = '\0';
    printf("Enter an adjective (description) : ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2) - 1] = '\0';
    printf("Enter a verb(-ing) : ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb) - 1] = '\0';
    printf("Enter an adjective (description) : ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("\n Today I went to a %s museum. \n",adjective1);
    printf("In the museum I saw a %s. \n",noun);
    printf("%s was %s and when I was near , it went away %s. \n",noun,adjective3,verb);
    return 0;
}