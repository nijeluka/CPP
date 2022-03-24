#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int n=-1,i,x;



	printf("\tUnesi broj\n");
	scanf("%d",&n);
	
		if(n<0)
		printf("Error");
	


	for(i=n;i>0;i--){ 
	for(x=n-i+1;x>0;x--)
		printf("*");  
	printf("\n");
}
}
	
