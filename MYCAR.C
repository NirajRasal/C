#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,num=5;
int a[10]={100,300,250,300,300,350,150,330,100,300};
initgraph(&gd,&gm,"C:\\TC\\BGI");
ellipse(180,150,360,0,50,60);
floodfill(180,150,WHITE);
drawpoly(num,a);
fillpoly(4,a);
line(400,100,500,100);
arc(350,200,180,360,50);
getch();
closegraph();
}
/*#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");          //to display a car//
rectangle(130,230,500,300);
circle(220,300,40);
circle(430,300,40);
moveto(318,150);
lineto(320,230);
moveto(320,150);
lineto(200,152);
moveto(420,150);
lineto(260,152);
moveto(200,150);
lineto(180,230);
moveto(420,150);
lineto(440,230);
line(680,337,10,345);
getch();
closegraph();
}*/
/*#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int r,d,x,y;
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("enter the radius");
scanf("%d",&r);
d=3-(2*r);
x=0;
y=r;
do
{
putpixel(200+x,200+y,RED);
putpixel(200+y,200+x,RED);
putpixel(200-y,200+x,RED);
putpixel(200+x,200-y,RED);               //bresenham circle drawing//
putpixel(200-y,200-x,RED);
putpixel(200-x,200-y,RED);
putpixel(200+y,200-x,RED);
putpixel(200-x,200+y,RED);
if(d<0)
{
d=d+(4*x)+6;
}
else
{
d=d+4*(x-y)+10;
y=y-1;
}
x=x+1;
}
while(x<y);
getch();
closegraph();
}*/

/*#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int i,j,gd=DETECT,gm;
int a[13][9]={
	   {0,0,0,0,1,0,0,0,0},
	   {0,0,0,1,0,1,0,0,0},
	   {0,0,1,0,0,0,1,0,0},
	   {0,1,0,0,0,0,0,1,0},
	   {1,1,1,1,1,1,1,1,1},
	   {1,0,0,0,0,0,0,0,1},
	   {1,0,0,0,0,0,0,0,1},
	   {1,0,0,0,0,0,0,0,1},
	   {1,0,0,0,0,0,0,0,1},
	   {1,0,0,0,0,0,0,0,1},
	   {1,0,0,0,0,0,0,0,1},
	   {1,0,0,0,0,0,0,0,1},
	   {1,0,0,0,0,0,0,0,1}};
					   //charcter generating//
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(i=0;i<13;i++)
{
for(j=0;j<9;j++)
{
if(a[i][j]==1)
putpixel(100+j,200+i,RED);
}
}
getch();
closegraph();
}*/












