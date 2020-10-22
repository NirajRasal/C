#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int dx,dy,x,y,p,x1,y1,x2,y2,i;
int gd=DETECT,gm;
clrscr();
printf("enter the value of x1,y1 and x2,y2\n");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
dx=(x2-x1);
dy=(y2-y1);
p=2*(dy)-(dx);
x=x1;
y=y1;
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("output of bresenham line algo:");
while(x<=x2)
{
if(p<0)
{
x=x+1;
y=y;
p=p-2*(dx);
}
else
{
x=x+1;
y=y+1;
p=p+2*(dy-dx);
}
putpixel(x,y,WHITE);
}
getch();
closegraph();
}