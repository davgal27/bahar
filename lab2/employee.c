/* 4)Write a program that asks for:
i. Employee name, surname, age and (monthly) pay-cheque salary;
ii.After each 5 (assumed successful) entries, the program displays the output in
column format, making sure that:
– All columns are properly aligned;
– Truncating names and surnames longer than 10 characters;
– Adding an initial column to display an automatically generated counter starting at 1 – you
may wish to try to keep your source code compact by displaying and incrementing the
counter within the same expression;
– Adding a final column with the computed yearly total for a 13-month pay-cheque salary;
– Giving the user the choice for the precision for the salary columns.
iii.The program terminates after 10 successful entries;
iv. On termination, the average salary for all entries should be calculated and
displayed. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char name[100];
	char surname[100];
	int age;
	int mon_sal;


	printf("Welcome to the employee logging system, please enter the information about 5 employees:");

	printf("Name: ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0'; 
	//fgets reads input from the user including the newline that is typed when the user presses Enter.
	//strcspn replaces the newline with the string terminator \0, to prevent formatting errors 

	printf("Surname: ");
	fgets(surname, sizeof(surname), stdin);
	surname[strcspn(surname, "\n")] = '\0';
	
	printf("Age: ");
	scanf("%d", &age);
	
	printf("Monthly salary: ");
	scanf("%d", &mon_sal);

	printf("| %-10.10s | %-10.10s | %-10d | %-10d |", name, surname, age, mon_sal);

	return 0;
}

