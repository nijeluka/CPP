#include<stdio.h>
#include<math.h>


	int pobjednik(int a, int b){
		return (a+b)%2;
		
		}
		

int main()
{
	int a, b;
	
	printf("Unesi dva broja:\n");
	scanf("%d %d", &a, &b);
	
	printf(pobjednik(a,b)?"Tatjana":"Zvonimir");
	
}

