#include<stdio.h>
#include<math.h>

	int dionice(int min, int max, int s, int c){
		int zavrsna_cijena = s*(100+c)/100;
		return zavrsna_cijena>=min && zavrsna_cijena<=max;
	}
	
int main()
{
	int s;
	int min, max;
	int c;
	
	scanf("%d %d %d %d", &s, &min, &max, &c);
	
	if (dionice(min, max, s, c)) printf("Kupice dionice");
	else printf("nece kupit dionice");
	
}

