#include<conio.h>
#include<graphics.h>

int main(void)
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C;\\TC\\BGI");
	setbkcolor(4);
	setfillstyle(2,5);
	
	
	char kretanje;
	int xp=0, yp=0;
	while(kretanje != 'q'){
		rectangle(10+xp, 10+yp, 120+xp,120+yp);
		kretanje = getch();
		cleardevice();
		if(kretanje == 'w')
			yp = yp-20;//gore
		if(kretanje == 's')
			yp += 20;//dole
		if(kretanje == 'a')
			xp -= 20;//levo
		if(kretanje == 'd')
			xp += 20;//desno
	cleardevice();
	
	}
	getch();
	closegraph();
	return 0;
	
	
	
}

