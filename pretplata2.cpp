#include<stdio.h>

float trosakPretplate(int N, float x)	//definicija funkcije
{ 
	return N*x;
}
void trosakPretplate2(int *N, float *x, float* rez)

	{
		*rez=*N * *x;
	}
int main()
{
	
	int brPrijatelja;
	float cijena, trosak;
	
	printf("Unesi broj prijatelja: ");
	scanf("%d" ,&brPrijatelja);

	printf("Unesi cijenu pretplate: ");
	scanf("%f" ,&cijena);
	
	trosak=trosakPretplate(brPrijatelja, cijena);    //poziv funkcije
	printf("Minimalni trosak pretplate iznosi %.2f", trosak);
	
	trosakPretplate2(&brPrijatelja,&cijena,&trosak);
	printf("\nMinimalni trosak pretplate iznosi %.2f", trosak);
	//trosak = trosakPretplate(brPrijatelja);
	//poziv funkcije sa zadanim argumentom
	
	return 0;
}

