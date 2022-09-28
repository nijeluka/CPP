#include <stdlib.h>
#include <stdio.h>
#include <math.h>



	int sum(int a){
	return a==1?1:a+sum(a-1); //on vrti sve dok broj ne bude 1 npr stavis 6 i vrti npr 6+5+4+3+2+1 kad dode do broja 1 kod zavrsava i to se sve zbroji i to je N
}
int main(){
	
	int N;
	printf ("Unesite broj:\n");
    scanf ("%d", &N);

	printf ( "%d", sum(N));
}




