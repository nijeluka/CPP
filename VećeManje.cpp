#include <stdio.h>

int main(){
	
    int a;
	int b;

    printf ("Unesi prvi broj\n");
    scanf ("%d", &a);

    printf ("Unesi drugibroj\n");
    scanf ("%d", &b);
	
	if(a>b)
	{
		printf("Broj (%d) je veæi od drugog broja(%d)",a ,b);
	}
	else
	{
		printf("Broj (%d) je veæi od drugog broja (%d)",b ,a);
	}
}
