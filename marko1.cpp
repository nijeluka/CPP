#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
	int x;
	int y;
	
	
	
	printf ("Unesite koliko prva tvrtka naplaæuje:\n");
    scanf ("%d", &x);
	
	printf ("Unesite koliko druga tvrtka naplaæuje:\n");
    scanf ("%d", &y);
	
	
	if(x>y)
	{
		printf("Marko ce odabrati prvu tvrtku:\n");
	}
		if(x<y)
	{
		printf("Marko ce odabrati drugu tvrtku:\n");
	}
	
	
}


