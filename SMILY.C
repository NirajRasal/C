


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
moveto(300,240);
lineto(300,180);
circle(300,200,150);
circle(230,150,25);
circle(365,150,25);
arc(300,275,170,10,40);
moveto(260,270);
lineto(340,270);
lineto(310,270);
arc(112,150,150,149,45);
arc(488,150,150,149,45);
getch();
closegraph();
}