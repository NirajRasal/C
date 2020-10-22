#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x3,y3,tx,ty,nx1,ny1,nx2,ny2,nx3,ny3;
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("enter the values of x1,y1,x2,y2,x3,y3\n");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
printf("enter the translation points\n");
scanf("%d%d",&tx,&ty);
nx1=x1+tx;
ny1=y1+ty;
nx2=x2+tx;
ny2=y2+ty;
nx3=x3+tx;
ny3=y3+ty;
printf("\ntraslated object is:");
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
getch();
closegraph();
}
