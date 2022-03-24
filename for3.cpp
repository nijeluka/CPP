#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	

	int n=-1, fac=1;
	
	
	while(n<0){
	
	printf("\tUnesi broj\n");
	scanf("%d",&n);
	
		if(n<0)
		printf("Error");
	
	}
	
	
	for(int i=n; i>1; i--)
		fac*=i;
	
	
	
	printf("Faktorijel broja %d je %d",n,fac);
	
	
	
	
	
	
	
	return 0;
	}
