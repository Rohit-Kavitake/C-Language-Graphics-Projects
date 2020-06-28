#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>


void main()
{
	int gd=0,gm;
	int i;
	initgraph(&gd,&gm,"..//BGI");


	//Make car Move
	for(i=0;i<175;i+=2)
	{
	setbkcolor(9);
	setlinestyle(1,3,4);
	setcolor(WHITE);
	circle(550,75,35);         //sun
	setfillstyle(1,YELLOW);
	floodfill(550,75,WHITE);
	setcolor(8);
	rectangle(0,352,637,475);     //For Road
	setfillstyle(1,8);
	floodfill(100,400,8);
	/*for car    */
	setlinestyle(1,0,5);
	setcolor(WHITE);
	circle(150+i,300,50);	//wheel1
	setfillstyle(1,7);
	floodfill(150+i,300,WHITE);
	setcolor(8);
	circle(150+i,300,15);
	setfillstyle(1,9);
	floodfill(150+i,300,8);
	setcolor(WHITE);
	circle(350+i,300,50);	//wheel2
	setfillstyle(1,7);
	floodfill(350+i,300,WHITE);
	setcolor(8);
	circle(350+i,300,15);
	setfillstyle(1,9);
	floodfill(350+i,300,8);
	/*Car body*/
	setcolor(12);
	line(210+i,300,290+i,300);
	line(90+i,300,50+i,300);
	line(410+i,300,450+i,300);
	arc(150+i,300,0,180,60);
	arc(150+i,300,90,180,100);
	arc(350+i,300,0,90,100);
	arc(250+i,200,0,180,100);
	arc(350+i,300,0,180,60);
	setcolor(WHITE);
	setlinestyle(1,0,5);
	arc(240+i,200,90,180,50);
	setcolor(12);
	setfillstyle(9,11);
	floodfill(175+i,150,12);

	delay(10);
       if(i!=174){
	cleardevice(); }
	}
	getch();
	closegraph();
}
