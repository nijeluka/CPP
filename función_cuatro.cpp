#include <stdio.h>

float arit(int x, int y) {
	float rez;

	rez = (float)x / y;

	return rez;
}

void main()
	{
	int i, n, br, zbroj=0;
	float ars;

	printf("\nUčitaj broj n: ");
	scanf("%d", &n);

	for(i=0; i<n; i++) {
		printf("\nUčitaj %d. broj: ", i+1);
		scanf("%d", &br);		

		zbroj = zbroj+br;
	}

	ars = arit(zbroj, n);

	printf("\nAritmetička sredina brojeva je: %.2f", ars);
	
	return;
}
