#include <stdio.h>

void maksimum(int x, int y, int z) {
	int max;
	max=x;

	if(y > max)
		max=y;

	if(z > max)
		max=z;

	printf("\nNajve�i broj je %d.", max);

	return;
}

void main() {
	int a, b, c, m;

	printf("\nUpi�i tri broja: ");
	scanf("%d %d %d", &a, &b, &c);

	maksimum(a,b,c);

	return;
}
