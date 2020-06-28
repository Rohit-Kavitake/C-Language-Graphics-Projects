
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
 void main()
 {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\BGI");
	rectangle(100,50,500,450);
	setfillstyle(9,11);
	floodfill(125,75,WHITE);
	circle(300,250,150);
	setfillstyle(1,YELLOW);
	floodfill(300,300,WHITE);
	ellipse(230,220,0,360,25,40);
	setfillstyle(1,7);
	floodfill(230,220,WHITE);
	circle(230,220,10);
	setfillstyle(1,BLACK);
	floodfill(230,220,WHITE);
	ellipse(375,220,0,360,25,40);
	setfillstyle(1,7);
	floodfill(375,220,WHITE);
	circle(375,220,10);
	setfillstyle(1,BLACK);
	floodfill(375,220,WHITE);
	setcolor(BLACK);
	setlinestyle(1,0,3);
	arc(300,250,225,315,75);
	getch();
	closegraph();

 }
