#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
	int x;
	int y;
	
	
	
	printf ("Unesite koliko prva tvrtka naplaŠuje:\n");
    scanf ("%d", &x);
	
	printf ("Unesite koliko druga tvrtka naplaŠuje:\n");
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


