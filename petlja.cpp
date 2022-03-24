#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n=-1,i,x;

	
	
	printf("\tUnesi broj\n");
	scanf("%d",&n);
	
		if(n<0)
		printf("Error");
	
	
	for(i=n;i>0;i--){ //i=4, i=3, i=2,i=1, i=0
	for(x=n;x>0;x--)  //x=4, x=3 , x=2, x=1, x=0 
		printf(".");  //.... \n .... \n .... \n ....\n
	printf(i==1?"""\n");
}
}
	
	
