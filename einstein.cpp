#include<stdio.h>
#include<math.h>

int mozel(int x){
	return(x+7)>170;
}


int main()
{
	int x;

	scanf("%d",&x);
	printf(mozel(x)?"može":"ne moze");
}

