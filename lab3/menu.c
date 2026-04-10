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
#include <stdbool.h>

int main() {

    float currenttotal = 0;
    int cart[1000]; // will hold items from allitems struct 
    char menuchoice[5]; //char then converted to int. char to accept m, then atoi to see which item to add 
    int cartchoice;
    int cartsize = 0;
    char confirm[5];


    char choice[5];
    int numchoice;
    bool backtomenu; //go back to main menu

    int i;
    int numitems; // item count in inventory

    struct item
    {
        float itemprice; //float becuase decimal points
        char itemname[50];
        int itemcode;
    };

    struct item allitems[] = {
        {100, "Kurgerbing", 1},
        {200, "Mcfondles", 2},
        {300.50, "Pakkett Twistees tat trafil", 3},
        {400, "Ommok bic chips", 4}
    };

    
    while (true) {

        printf("\nWelcome to the shop. Kindly press the number you wish to proceed with: \n");
        printf("1. Add items to shopping cart\n");
        printf("2. Show current total\n");
        printf("3. Checkout\n");
        printf("4. Cancel session\n");
        printf("q. Quit\n");

        scanf("%s", choice); // read the choice. If the choice is a char, see if it is quitting. 

        if (choice[0] == 'q' || choice[0] == 'Q') {
            printf("Are you sure you want to quit? [y/Y]");
            scanf("%s", confirm);
            if (confirm[0] == 'y' || confirm[0] == 'Y') {
                printf("Quitting..\n\n\n");            
                exit(0);
            } else {
                printf("\nConfirmation failed, returning to menu...\n");
                continue;
            }
        }
        // convert choice to numerical
        numchoice = atoi(choice);

        switch (numchoice) {

            case 1:

                backtomenu = false;

                while (backtomenu == false) {
                    printf("\n\nChoose what to add to your cart by typing its code, or press m to exit to menu:\n\n");
                    printf("Items are in order: CODE -- NAME -- PRICE\n\n");

                    int numitems = sizeof(allitems) / sizeof(allitems[0]); // total bytes div by bytes of 1 item = number of items

                    i = 0;
                    while (i < numitems) { // print the itemlist array 
                        printf("%d -- %s -- %.2f\n", allitems[i].itemcode, allitems[i].itemname, allitems[i].itemprice);
                        i++;
                    };

                    i = 0;
                    scanf("%s", menuchoice); //see if menu is the choice

                    if (menuchoice[0] == 'm' || menuchoice[0] == 'M') {
                            backtomenu = true;
                    } else { 
                    cartchoice= atoi(menuchoice);

                    for (i = 0; i < numitems; i++) {
                        if(cartchoice == allitems[i].itemcode) {
                            cart[cartsize] = i;
                            cartsize++;
                            currenttotal = allitems[i].itemprice + currenttotal;
                            printf("\nAdded item: %s\n", allitems[i].itemname);
                            printf("\nCurrent total spent: %.2f\n\n\n", currenttotal);
                        }
                    }
                    }
                }
                break;

            case 2:

                backtomenu = false;

                while (backtomenu == false) {
                    printf("\n\nYour current total is: %.2f\n\n", currenttotal);
                    if (currenttotal > 1000) {
                        printf("Your cart is over 1000. mbasta ha ssalva pacocclu.\n");
                    }
                    printf("\nPress m/M to return to menu\n");
                    scanf("%s", menuchoice); //see if menu is the choice

                    if (menuchoice[0] == 'm' || menuchoice[0] == 'M') {
                            backtomenu = true;
                    }

                }
                break;

            case 3:
                
                backtomenu = false;

                while (backtomenu == false) {
                    printf("\n\nWelcome to checkout. Fetching your items ...\n");
                    for (i = 0; i < cartsize; i++) {
                        printf("\n%s, %.2f\n", allitems[cart[i]].itemname, allitems[cart[i]].itemprice);
                    }
                    printf("\n\nTotal amount to pay is: %.2f\n\n", currenttotal);
                    printf("Are you sure you wish to proceed? [y/Y]");
                    scanf("%s", confirm);

                    if (confirm[0] == 'y' || confirm[0] == 'Y') {
                        printf("Thankyou for your purchase!, you will be redirected to the shop page shortly...\n\n\n");
                        currenttotal = 0; //reset total needed 
                        cartsize = 0;
                        backtomenu = true;
                    } else {
                        printf("You brokie... returning to menu...");
                        backtomenu = true;
                    }

                }
                break;

            case 4:

                backtomenu = false;

                while (backtomenu == false) {
                    printf("Are you sure you wish to proceed in cancelling the session? [y/Y]");
                    scanf("%s", confirm);

                    if (confirm[0] == 'y' || confirm[0] == 'Y') {
                        printf("Cancelling your session...\n\n\n");
                        currenttotal = 0; //reset total needed 
                        cartsize = 0;
                        backtomenu = true;
                    } else {
                        printf("Confirmation failed, returning to menu...");
                        backtomenu = true;
                    }

                }
                break;
                
                printf("\nCancelling the session and returning to shop page...\n\n");
                cartsize = 0;
                currenttotal = 0;
                break;
        }
    }
}


