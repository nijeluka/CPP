#include <stdio.h>

int main(){
	
	int a;
	
	printf("Unesi broj kvadranta");
		scanf("%d", &a);
		
		
		switch(a){
			case 1:
				printf("x:+,y:+");
				break;
				
			case 2:
				printf("x:-,y:+");
				break;	
			
			case 3:
				printf("x:-,y:-");
				break;	
			
			case 4:
				printf("x:+,y:-");
				break;	
		default:
			printf("Nepostoji kvadrant!!!");	
			}
			return 0;
				
		}
