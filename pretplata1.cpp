#include<stdio.h>

float minTrosak(int N, float x)	//definicija funkcije
{ 
	return N*x;
}

int main()
{
	int brPrijatelja;
	float cijena, trosak;
	
	printf("Unesi broj prijatelja: ");
	scanf("%d" ,&brPrijatelja);

	printf("Unesi cijenu pretplate: ");
	scanf("%f" ,&cijena);
	
	trosak=minTrosak(brPrijatelja, cijena);    //poziv funkcije
	printf("Minimalni trosak pretplate iznosi %.2f", trosak);
	
	return 0;
}









