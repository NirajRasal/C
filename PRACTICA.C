#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,e;
 float f;
 clrscr();
 printf("\n enter the value of a and b\n");
 scanf("%d",&a);
 scanf("%d",&b);
 {
 c=a+b;
 printf("\n the addition of numbers is %d\n",c);
 d=a-b;
 printf("\n the subtraction of numbers if %d\n",d);
 e=a*b;
 printf("\n the multiplication of numbers is %d\n",e);
 f=a/b;
 printf("\n the division of numbers is %f\n",f);
 printf("\n\t\n\n\t press any key to exit");
 }
 getch();
 }