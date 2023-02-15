#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 


struct stablo_jabuka{
    int visina;
    int prosjecan_rod;
    int trenutni_broj_jabuka;
    };
    
    void doadaj_u_dat(struct stablo_jabuka j){
    	FILE *filePointer;
    filePointer=fopen("stablojabuka.txt","a");
    
    fprintf(filePointer,"%d\t%d\t%d\n",j.visina,j.prosjecan_rod,j.trenutni_broj_jabuka);
    fclose(filePointer);
	}
	
	
	void ukupno(){
		int sum=0,a,b,c;
		FILE *filePointer;
    filePointer=fopen("stablojabuka.txt","r");
		while(fscanf(filePointer,"%d %d %d",&a,&b,&c)==3)
		sum+=c;
		
		printf("Ukupan broj jabuka: %d\n",sum);
		fclose(filePointer);
	}
    
    
    
    int main(){

    int i;
    char odg[5];
    struct stablo_jabuka j;
    
    do{
    printf("Unesi VISINU STABLA\n");
    scanf("%d", &j.visina);
    printf("Unesi koliko stablo prosjecno urodi\n");
    scanf("%d", &j.prosjecan_rod);
    printf("Unesi koliko trenutno ima jabuka na stablu\n");
    scanf("%d", &j.trenutni_broj_jabuka);
    
    doadaj_u_dat(j);
    ukupno();
    printf("Jab opet, a ti?");
    scanf("%s",odg);
	}while(strcmp(odg,"ne"));
}
