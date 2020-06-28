#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void heart(int);

void main()
{
	int gd=0,gm;
	int i,r=0;
	initgraph(&gd,&gm,"..//BGI");
	while(r!=5)    //make it beat five times
	{
		setbkcolor(11);
		for(i=0;i<10;i+=1)  //increase size
		{
			heart(i);
		}
		for(i=10;i>0;i-=1)       //decrease size
		{
			heart(i);
		}
		r+=1;
	}
	getch();
	closegraph();
}

void heart(int i)
{
		/* The Heart*/
		setcolor(WHITE);
		arc(250-i,200-i,0,270,50+i);   //left upper
		arc(350+i,200-i,270,180,50+i); //right upper
		arc(250-i,300+i,0,90,50+i);    //left lower
		arc(350+i,300+i,90,180,50+i);  //right lower
		setfillstyle(1,RED);
		floodfill(300,250,WHITE);
		delay(100);
		if(i!=10||i!=0)
		cleardevice();
}