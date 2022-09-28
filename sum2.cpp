#include <stdlib.h>
#include <stdio.h>
#include <math.h>



	int sum(int a){
		a=a%2==1?a-1:a;
	return a==2?2:a+sum(a-2); 

}
	
int main(){
	
	int N;
	printf ("Unesite broj:\n");
    scanf ("%d", &N);

	printf ( "%d", sum(N));
}

