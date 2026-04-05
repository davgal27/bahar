/*Write a program that repeatedly displays the following menu options:
1. Add items to shopping cart
2. Show current total
3. Check out
4. Cancel session
q. Quit

Option 1: Asks the end-user to choose from a list of preset shop items (displayed as code - name - price) and quantity, keeping a running total for the current shopping session.
Option 2: Displays the current total.
Option 3: Displays the itemized bill of purchased products & total, then starts a new session.
Option 4: Cancels the current session and starts afresh.
Option q: Terminates the program immediately.
Note: Option selections for 3, 4, and q should be confirmed by the user.*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    char itemlist[100];
    char itemname[50];

    int currenttotal[100];
    int purchasedproducts[100];

    char choice[5];
    int numchoice;

    struct item
    {
        float itemprice; //float becuase decimal points
        char itemname[50];
        int itemcode;
    };

    struct item allitems[] = {
        {100, "Kurgerbing", 1},
        {200, "Mcfondles", 2},
        {300, "Pakkett Twistees tat trafil", 3},
        {400, "Ommok bic chips", 4}
    };

    printf("Welcome to the shop. Kindly press the number you wish to proceed with: \n");
    printf("1. Add items to shopping cart\n");
    printf("2. Show current total\n");
    printf("3. Checkout\n");
    printf("4. Cancel session\n");
    printf("q. Quit\n");\

    scanf("%s", choice); // read the choice. If the choice is a char, see if it is quitting. 
    if (choice[0] == 'q' || choice[0] == 'Q') {
        printf("Qutting...");
        exit(0);
    }
    // convert choice to numerical
    numchoice = atoi(choice);

    switch (numchoice) {
        case 1: 
            printf("Choose what to add to your cart:");
        case 2:
        case 3:
        case 4:
    }


    

}


