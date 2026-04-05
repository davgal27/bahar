#include <stdio.h>
#include <string.h>

int main() {

    char wordone[100];
    char wordtwo[100];
    char wordthree[100];
    char reversedwone[100];
    char reversedwtwo[100];
    char reversedwthree[100];
    int length;
    int i;
    

    printf("Enter three words into the word reversal machine: ");
    printf("\nWord 1: ");
    scanf("%s", wordone);

    printf("\nWord 2: ");
    scanf("%s", wordtwo);

    printf("\nWord 3: ");
    scanf("%s", wordthree);


    //word one
    length = strlen(wordone);
    for (i = 0; i < length; i++) {
        reversedwone[i] = wordone[length - i - 1];
    }

    // word two
    length = strlen(wordtwo);
    for (i = 0; i < length; i++) {
        reversedwtwo[i] = wordtwo[length - i - 1];
    }

    //word three
    length = strlen(wordthree);
    for (i = 0; i < length; i++) {
        reversedwthree[i] = wordthree[length - i - 1];
    }

    printf("\nThinking ... \n");

    printf("\nReversed word one: %s\n", reversedwone);
    printf("\nReversed word two: %s\n", reversedwtwo);
    printf("\nReversed word three: %s\n\n", reversedwthree);

}
    