#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


struct zivina{
	char kako_se_glasa[50];
	int broj_nogu;
	int visina;
	char spec[20];
	};

int broj_tabana{
int *ptr;
}

	int main (void){

	struct zivina zv[3]={"BE_BE", 4, 66,"ovan",
	"gihi_hi_ha",6,140,"Equus_caballus"};

	
	printf("Unesite podatke vaseg stvorenja(glasanje, nogice, talez visokosti, spec)\n\n", zv[2]);
		scanf("%s %d %d %s", &zv[2].kako_se_glasa, &zv[2].broj_nogu, 
		&zv[2].visina, &zv[2].spec);
	
}

	void broj_tabana(zivina &zv){
	printf ("ima: %d noge \n", &zv.broj_nogu);
}
  void dodvikivanje(zivina &zv){
	printf ("ovako se glasa: %s \n", &zv.kako_se_glasa);
}


	
	
