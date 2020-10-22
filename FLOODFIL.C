#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood(int x,int y,int old_color,int fill_color);
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
rectangle(50,50,100,100);
flood(55,55,GREEN,WHITE);
getch();
closegraph();
}
void flood(x,y,old_color,fill_color)
 {
  if(getpixel(x,y)==old_color)
  {
   putpixel(x,y,fill_color);
   flood(x,y+1,old_color,fill_color);
   flood(x,y-1,old_color,fill_color);
   flood(x+1,y,old_color,fill_color);
   flood(x-1,y,old_color,fill_color);
   flood(x+1,y+1,old_color,fill_color);
   flood(x-1,y-1,old_color,fill_color);
   flood(x+1,y-1,old_color,fill_color);
   flood(x-1,y+1,old_color,fill_color);
 }
}