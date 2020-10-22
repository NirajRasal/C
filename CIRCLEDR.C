#include<stdio.h>
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