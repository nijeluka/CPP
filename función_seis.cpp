#include <stdio.h>

void ascii(char x) {
	int asc;

	asc = x;

	printf("\nAscii kod znaka %c je %d", x, asc);

	return;
}

void main() {
	int i;
	char znak;

	for (i=1; i<=5; i++) {
		printf("\nUnesi %d. znak: ", i);
		scanf(" %c", &znak);

		ascii(znak);
	}

	return;
}
