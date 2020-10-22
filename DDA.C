#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<process.h>
void main()
{
int x,y,x1,y1,x2,y2,dx,dy,i,len,j=WHITE;
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("enter the value of (x1,y1) and (x2,y2)\n");
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>=dy)
{
len=dx;
}
else
{
len=dy;
}
dx=dx/len;
dy=dy/len;
x=x1;
y=y1;
for(i=0;i<len;i++)
{
x=x+dx;
y=y+dy;
putpixel(x,y,j);
}
getch();
closegraph();
}
