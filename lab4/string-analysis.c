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
bool validity;
int length;
char firstchar;
char mostfreq;


void analyse_string(char input_string[]) {

    // determine validity : if string has numeric characters it is not valid
    validity = true; //assume true and make false if isdigit returns something which isnt 0 
    for (i = 0; i < strlen(input_string); i++) {
        if (isdigit(input_string[i]) != 0){
            validity = false;
            break; // no need to keep checking 
        }
    }
    // length and first char
    length = strlen(input_string);
    firstchar = input_string[0];

    // most frequent character
    int charcounts[256] = {0}; // creates an array of 256 indexes of 0
    int i = 0;
    //for loop to count each character
    for (i = 0; i < length ; i++){
        charcounts[input_string[i]]++; //use the ascii value as the index and increment that index for each find of it 
    }

    int highestcount = 0;
    //for loop to see the highest count in charcounts array
    for (i = 0; i < length ; i++) {
        if (charcounts[input_string[i]] > highestcount) {
            highestcount = charcounts[input_string[i]];
            mostfreq = input_string[i];
        }
    }
}

int main() {
    printf("Enter a string with no numeric characters as input!: ");
    scanf("%s", input_string);
    analyse_string(input_string);
    printf("\nAnalysing your string...");
    if (validity == true) {
        printf("\nYour string is valid!");
    } else {
        printf("\nYou don't kow how to follow basic instructions, your string has numbers and is invalid...");
    }

    printf("\nYou inputted a string of length: %d", length);
    printf("\nThe first character in your string is: %c", firstchar);
    printf("\nThe most frequently used character in your string is: %c\n\n", mostfreq);

    return 0;
}