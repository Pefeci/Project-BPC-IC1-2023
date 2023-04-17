#include <stdio.h>

void main () {
	short int age;
	printf("zadejte vek \n");
	scanf("%d", &age);
	printf("%d \n", age);
	if (age > 0 && age < 21) {
		printf("zadejte spravny vek \n");
	}
	else {
		printf("vlajka\n");
	}
}
