#include <stdio.h>
#include <math.h>

void korijen(int x) {
	float k;

	k = sqrt(x);

	printf("\nKorijen broja %d je %.2f", x, k);

	return;
}

void main() {
	int br;

	printf("\nU�itaj broj: ");
	scanf("%d", &br);

	while (br > 0) {
		korijen(br);

		printf("\nU�itaj broj: ");
		scanf("%d", &br);
	}

	return;
}
