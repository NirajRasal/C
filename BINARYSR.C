#include<stdio.h>
#include<conio.h>
void main()
{
int a[20];
int i,n,item,start,end,middle;
clrscr();
printf("enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the elemenr %d",i+1);
scanf("%d",&a[i]);
}
printf("enter the element want to search");
scanf("%d",&item);
start=0;
end=n-1;
middle=(start+end)/2;
while(item!=a[middle] && start<=end)
{
if(item>a[middle])
start=middle+1;
else
end=middle-1;
middle=(start+end)/2;
}
if(item==a[middle])
printf("%d is found at position %d",item,middle+1);
if(start>end)
printf("%d is not found",item);
getch();
}

/*#include<stdio.h>
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
}*/

















