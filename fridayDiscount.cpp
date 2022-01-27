#include <stdio.h>
#include <math.h>

int main()
{
 	int normPrice;
 	int discount;
 	int save;
	int bottleOfViski;
	int cijenaLjetovanja;
 	

	printf("upisi cijenu\n");
	scanf("%d",&normPrice);
	printf("Koliki je popust\n");
	
	scanf("%d", &discount);
	
	printf("kolko je kostalo ljetovanje\n");
	scanf("%d",cijenaLjetovanja);
	save=discount/100*normPrice;
	bottleOfViski=cijenaLjetovanja/save;
	
	printf("treba kupiti %d boca",bottleOfViski);
	

}

