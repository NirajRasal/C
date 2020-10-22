#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood(int x,int y,int n,int o);
void main()
{
int gd=DETECT,gm,n=7;
int a[14]={200,100,230,130,230,180,200,210,170,180,170,130,200,100};
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
drawpoly(n,a);
flood(200,155,RED,0);
getch();
closegraph();
}
void flood(int x,int y,int n,int o)
{
if(getpixel(x,y)==o)
{
putpixel(x,y,n);
flood(x+1,y,n,o);
flood(x-1,y,n,o);
flood(x,y+1,n,o);
flood(x,y-1,n,o);
}
}

