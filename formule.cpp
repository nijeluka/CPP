#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float a,b,c,d=1;
	printf("Unesi broj sa decimalom\n");
	
	while (d){
		a=b;
		b=c;
		c=d;
		scanf("%f",&d);
	}
	
	printf("razlika %.2f",a-c);
}
