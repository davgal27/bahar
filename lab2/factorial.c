#include <stdio.h>

int intput;
int i;
int j = 0;

int main() {
	printf("Enter a number to compute its factorial!: ");
	scanf("%d", &intput);

	for (i = 1; j < intput; j++) {
		i = i * (intput - j);
	}

	printf("output is %d", i);
}