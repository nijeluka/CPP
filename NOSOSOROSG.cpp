#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct NajaciNososorog{
	char ime[25];
	char boja[25];
	int brzinanamax;
	int silaudarca;
	int masa;
};

int main (void){
	int i,sum=0,c,n1;
	
	struct NajaciNososorog nj[4]={"Dinosaur","Ruzicanstvena", 62, 99, 2500,
								   "Buba","Ruzicasta", 32, 55, 3200,
								   "Jadranko","Rozena", 40, 120, 3800,	
								};
		
		
	printf("Unesite podatke za vaseg nosoroga nososoroga\n\n", nj[3]);
		
	printf("Kako se zove nososorog: ");
	scanf("%s", &nj[3].ime);
	
	printf("Koje je boje taj nososorog: \n");
	scanf("%s", &nj[3].boja);
	
	printf("Unesite masu nososoroga: ");
	scanf("%d", &nj[3].masa);
		
	printf("Unesite max brzinu nososoroga: ");
	scanf("%d", &nj[3].brzinanamax);
	
	printf("Unesite silu udarca nososoroga: ");
	scanf("%d", &nj[3].silaudarca);	
		
	
	if(nj[0].silaudarca>nj[1].silaudarca&&nj[0].silaudarca>nj[2].silaudarca)
printf("%s je najaci nosorog takoder je %s boje",nj[0].ime,nj[0].boja);

	else if(nj[0].masa>nj[1].masa&&nj[0].masa>nj[2].masa)
printf("%s je najaci nosorog takoder je %s boje",nj[0].ime,nj[0].boja);

	else if(nj[0].brzinanamax>nj[1].brzinanamax&&nj[0].brzinanamax>nj[2].brzinanamax)
printf("%s je najaci nosorog takoder je %s boje",nj[0].ime,nj[0].boja);

	else if(nj[1].silaudarca>nj[2].silaudarca&&nj[1].silaudarca>nj[0].silaudarca)
printf("%s je najaci nosorog takoder je %s boje",nj[1].ime,nj[1].boja);

	else if(nj[1].masa>nj[0].masa&&nj[1].masa>nj[2].masa)
printf("%s je najaci nosorog takoder je %s boje",nj[1].ime,nj[1].boja);

	else if(nj[1].brzinanamax>nj[2].brzinanamax&&nj[1].brzinanamax>nj[0].brzinanamax)
printf("%s je najaci nosorog takoder je %s boje",nj[1].ime,nj[1].boja);

	else if(nj[2].silaudarca>nj[1].silaudarca&&nj[2].silaudarca>nj[0].silaudarca)
printf("%s je najaci nosorog takoder je %s boje",nj[2].ime,nj[2].boja);

	else if(nj[2].masa>nj[1].masa&&nj[2].masa>nj[0].masa)
printf("%s je najaci nosorog takoder je %s boje",nj[2].ime,nj[2].boja);

	else if(nj[2].brzinanamax>nj[1].brzinanamax&&nj[2].brzinanamax>nj[0].brzinanamax)
printf("%s je najaci nosorog takoder je %s boje",nj[2].ime,nj[2].boja);
		
		
	};
	

