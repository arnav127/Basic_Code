#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<MATH.H>

#define Round(x) (x - int(x) < 0.5) ? int(x):int(x)+1

void DDA(int xa, int ya, int xb, int yb)
{
	int dx, dy, steps, x, y, k;
	float xinc, yinc;

	x= xa; y=ya;

	dx = abs(xb - xa);
	dy = abs(yb - ya);

	if (dx == 0){
		yinc=1;
		xinc=0;
		steps=dy;
	}
	else if(dy== 0)
	{   	xinc=1;
		yinc=0;
		steps=dx;
	}
	else
	{
	if(dx > dy)
	steps = dy;
	else
	steps = dx;

	xinc = dx/steps;
	yinc = dy/steps;

	}

	putpixel(Round(x), Round(y), WHITE);

	for(k=0; k < steps; k++)
	{
		x+= xinc;
		y+= yinc;
		putpixel(Round(x), Round(y), WHITE);
	}

}

void main()
{
	clrscr();

	int gd = DETECT ,gm;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	DDA(100,100,500,100);

	getch();
}