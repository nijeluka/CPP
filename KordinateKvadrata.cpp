#include <stdio.h>

int main(){
	
	int a;
	
	printf("Unesi broj kvadranta");
		scanf("%d", &a);
		
		if(a==1)
		{
			printf("+ +");
		}
		
		else if(a==2)
		{
			printf("- +");
		}
		
		else if(a==3)
		{
			printf("- -");
		}
		
		else if(a==4)
		{
			printf("+ -");
		}
		else
    	{
       		printf ("Unesen krivi kvadrant");
    	}
    }
		
		
