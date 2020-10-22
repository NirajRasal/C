#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundary(int,int,int,int);
void main()
{
int gd=DETECT,gm,n=6;
int a[12]={200,110,250,150,250,200,150,200,150,150,200,110};
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
drawpoly(n,a);
boundary(200,164,RED,15);
getch();
closegraph();
}
void boundary(int x,int y,int f,int b)
{
if(getpixel(x,y)!=b&&getpixel(x,y)!=f)
{
putpixel(x,y,f);
boundary(x+1,y,f,b);
boundary(x-1,y,f,b);
boundary(x,y+1,f,b);
boundary(x,y-1,f,b);
}
}