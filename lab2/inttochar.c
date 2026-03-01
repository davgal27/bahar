#include <stdio.h>
// a simple program to demonstrate conversion between datatypes in C
int intput;

int main(){
	printf("Give any number: ");
	scanf("%d", &intput);
	printf("That number is equivalent to this character: %c\n", intput);
	printf("And is equivalent to this octal number: %o\n", intput);
	printf("And is equivalent to this hexadecimal number: %x\n", intput);

	return 0;
}


