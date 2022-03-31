#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

	int n,i=1,sum=0;
	
	printf("Unesi broj\n");
	scanf("%d",&n);
	
	   while(i<n){
       if(n%i==0)
       sum=sum+i;
       i++; 
}
 
	
if(sum==n)
   printf(" Broj je savrsen\n"); 
else
    printf(" Broj nije savrsen\n");
    

}
