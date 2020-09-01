#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char name [9];
	char family [9];
	int age;
	
	for (int i = 0; i < 2; i++) {
		printf("Please enter inputs: ");
		scanf("%8s %8s %d", name, family, &age);
		if (strcmp(name, "yasaman") == 0 && strcmp(family, "ghassemi") == 0 && age == 24) {
			printf("You are Yasaman. \n");
		}
		else {
			if (strcmp(name, "ali") == 0 && strcmp(family, "ghassemi") == 0 && age == 21) {
				printf("You are Ali. \n");
			}
			else {
				printf("You aren't familiar. \n");
			}
		}
	}
	return 0;

}
