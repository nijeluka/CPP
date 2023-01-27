#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct gusteri{
	char boja[50];
	int visina;
	int brzina;
	char jdel_muhe[3];
	};
	
	int main (void){
	int i=0;
	
	struct gusteri gu[6]={"plava", 120, 34, "da",
						  "mijenja_ih", 60, 13, "da",
						  "zelena", 28, 11, "ne",
						  "ruzicanstvena", 75, 36, "da",
						  "roza", 34, 6,"ne"};
						  
						  
						  
	printf("Unesite podatke vaseg gustera(boja, visina, brzina, jedel muhe)\n\n", gu[5]);
		scanf("%s %d %d %s", gu[5].boja, &gu[5].visina, &gu[5].brzina, gu[5].jdel_muhe);					  
	
	
			for (int i = 0; i < 6; i++) {
		    printf("guster zivotinja je %s boje, visoka je %d, brzina joj iznosi %d, %s jede muhe\n",gu[i].boja,gu[i].visina,gu[i].brzina,gu[i].jdel_muhe);
		}
			
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
