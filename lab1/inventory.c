#include <stdio.h>
// initialize stock
int A3 = 1000;
int A4 = 1000;
int A5 = 1000;
int A3order;
int A4order;
int A5order;
int remaining;
char another;

int order(int x, int y) {
	remaining = x - y;
	return remaining;
}

int main() {
	do {

		printf("Welcome to the Paper ordering system, please enter how many packs of each paper type you want:\n");
		printf("A3: ");
		scanf("%d", &A3order);

		printf("A4: ");
		scanf("%d", &A4order);
		
		printf("A5: ");
		scanf("%d", &A5order);

		printf("You have ordered:\n %d A3 packs,\n %d A4 packs,\n %d A5 packs\n", A3order, A4order, A5order);
		printf("Remaining stock:\n %d A3 packs,\n %d A4 packs,\n %d A5 packs\n", order(A3, A3order), order(A4, A4order), order(A5, A5order));
		// update stock
		A3 = A3 - A3order;
		A4 = A4 - A4order;
		A5 = A5 - A5order;

		printf("Place another order? (y/Y): ");
		scanf(" %c", &another);

		if(another != 'y' && another != 'Y'){
			printf("Exiting...\n");
		}
	}
	while(another == 'y' || another == 'Y');
	return 0;
}


