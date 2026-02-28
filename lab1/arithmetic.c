#include <stdio.h>

// Defining arithmetic functions
int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}


int main() {
    // variable declarations
    int num1;
    int num2;
    char choice;
    int result;
    char repeat;

    // repeat the following if the user types y or Y when prompted to continue
    do {
        printf("Enter two numbers in format x y: ");
        scanf("%d %d", &num1, &num2);

        printf("Press A to add, S to subtract, and M to multiply: ");
        scanf(" %c", &choice);

        if(choice == 'A')
        {
            result = add(num1, num2);
        }

        else if(choice == 'S')
        {
            result = subtract(num1, num2);
        }

        else if(choice == 'M')
        {
            result = multiply(num1, num2);
        }

        else {
            printf("invalid choice\n");
            continue;
        }

        printf("result: %d\n", result);
        printf("Do you want to continue? (y/Y): ");
        scanf(" %c", &repeat);

    }
    while(repeat == 'y' || repeat == 'Y');

    printf("Exiting...\n");

    return 0;
}