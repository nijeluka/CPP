#include <stdio.h>
#include <stdlib.h>

	int main()
{
	int a;
	
	printf("Unesi stranicu a:\n");
	scanf ("%d", &a);
	
	int b;
	
	printf("Unesi stranicu b:\n");
	scanf("%d", &b);
	
	if (a>b)
	{
		int P=a*b;
		printf("Povrsina je %d",P);
	}
	else 
	{
		int O=2*a+2*b;
		printf("Opseg je %d",O);
	}

	return 0;
}




