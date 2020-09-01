#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char name [9];
	char family [9];
	int age;
	
	for (int i = 0; i < 2; i++) {
		printf("Please enter name: ");
		scanf("%8s", name);
		printf("Please enter family: ");
		scanf("%8s", family);
		printf("Please enter age: ");
		scanf("%d", &age);
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
