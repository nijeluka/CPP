	#include<stdlib.h>
	#include<stdio.h>

	int main()
	{
		float F;
		float C;
		float K;
		scanf("%f", &F);
		
		C=(F-32)*9/5;
		K=C+275.13;
		
			printf("Temperatura u celzijevim stupnjevima je %.2f\n", C);
			printf("Temperatura u kelvinima je % .2f\n", K);
			
			return 0;
	}
