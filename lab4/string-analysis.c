/*Write a function that expects a string with no numeric characters as input (passed by reference), and outputs the:
* Input validity.
* Input length.
* Input's first character.
* Input's most frequent character.
Finally, test the function inside a program that accepts a sequence of strings from an input stream.
Hint: Refer to scanf() to see how strings are passed by reference.*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> // for isdigit
#include <string.h> // for strlen

char input_string[1000];
int i = 0;
bool validity = true;
int length;
char firstchar;
char mostfreq;


void analyse_string(char input_string[]) {

    // determine validity : if string has numeric characters it is not valid
    for (i = 0; i < strlen(input_string); i++) {
        if (isdigit(input_string[i]) == true){
            validity = false;
        }
    }
    // length and first char
    length = strlen(input_string);
    firstchar = input_string[0];

    // most frequent character
    int charcounts[256] = {0}; // creates an array of 256 indexes of 0
    int i = 0;
    for (i = 0; i < length ; i++){
        charcounts[input_string[i]]++; //use the ascii value as the index and increment that index for each find of it 
    }

    int highestcount = 0;

    for (i = 0; i < length ; i++) {
        charcounts
    }

}

int main() {
    printf("Enter a string with no numeric characters as input!: ");
    scanf("%s", input_string);


    return 0;
}