/*1) The program should calculate the frequency of each vowel and consonant, determine the most frequent character (excluding spaces), count the number of uppercase and lowercase letters, and recursively reverse the string. Implement at least three functions: 
countFrequencies() to count vowels, consonants, and letter cases; 
findMostFrequentChar() to identify the most repeated non-space character; and 
reverseString() to reverse the string using recursion.
 Use loops and conditional statements for character comparisons, logical checks, and processing the string efficiently.
 */
#include <stdio.h>
#include <string.h>
int vowels = 0, consonants = 0, upper = 0, lower = 0;
void countFrequencies(char str[]);
char findMostFrequentChar(char str[]);
void reverseString(char str[], char rev[], int index, int len);
int main() {
    char str[100], reversed[100];
    int len;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') { //using this I am replacing the new line character with string terminator
        str[len - 1] = '\0';
        len--;
    }
    countFrequencies(str);
    char mostFreq = findMostFrequentChar(str);
    reverseString(str, reversed, 0, len);
    reversed[len] = '\0';
    printf("\nNumber of Vowels: %d", vowels);
    printf("\nNumber of Consonants: %d", consonants);
    printf("\nNumber of Uppercase letters: %d", upper);
    printf("\nNumber of Lowercase letters: %d", lower);
    if (mostFreq != '\0')
        printf("\nMost frequent character : '%c'", mostFreq);
    else
        printf("\nNo frequent characters.");

    printf("\nReversed string: %s\n", reversed);

return 0;
}
void countFrequencies(char str[]) {
    int i;
    vowels =consonants = upper= lower =0;

    for (i =0; str[i] != '\0';i++) {
        char ch =str[i];
        if (ch >='A'&& ch <='Z') {
            upper++;
            if (ch =='A'||ch=='E'||ch == 'I'||ch == 'O'|| ch=='U')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            lower++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
     }
 }
}
char findMostFrequentChar(char str[]) {
    int freq[256];
    int i, maxFreq = 0;
    char mostFreq = '\0';
    for (i = 0;i< 256;i++) {
        freq[i] = 0;
    }

    for (i=0;str[i]!= '\0'; i++) {
        char ch =str[i];
        if (ch !=' '&& ch!= '\t' && ch !='\n') {
            freq[(int)ch]++;
            if (freq[(int)ch]> maxFreq) {
                maxFreq = freq[(int)ch];
                mostFreq = ch;
            }
        }
    }
    return mostFreq;
}

void reverseString(char str[],char rev[],int index,int len) {
    if (index == len) return;
    rev[len- index-1] = str[index];
    reverseString(str,rev, index +1,len);
}
