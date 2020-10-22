/*#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int *ptr;
int i,y,z;
clrscr();
ptr=(int *)malloc(1);
for(i=0;i<2;i++)
{
printf("enteer number %d",i+1);
scanf("%d",(ptr+i));
}
for(i=0;i<2;i++)
{
printf("\n the numbers are %d",*(ptr+i));
y=(*ptr)*(*ptr);                              //square of number//
z=*(ptr+i)**(ptr+i);
}
printf("\nthe square  of number is %d ",y);
printf("\n square  of number two is %d",z);
getch();
}*/


/*#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int *ptr;
int i,y,n;
clrscr();
ptr=(int *)malloc(1);
printf("how much element u want to insert");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enteer %d number",n);
scanf("%d",(ptr+i));
}
for(i=0;i<n;i++)
{                                       //largest of number//
if(*ptr<*(ptr+i))
*ptr=*(ptr+i);
}
printf("the largest number is %d",*ptr);
getch();
}*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],pos,value,n,i,temp;
clrscr();
printf("enter the number of element in array\n");
scanf("%d",&n);
printf("enter %d element\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=n-1;
printf("enter the location which you want to insert element");
scanf("%d",&pos);
printf("enter the new value");
scanf("%d",&value);
if(pos>n+1)
{
printf("enter valid position");           //insertion in array//
exit(0);
}
for(i=pos-1;i<n-1;i++)
{
a[i+1]=a[i];
}
n=n+1;
a[pos-1]=value;
printf("the new array is\n");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
getch();
}










/*#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],pos,value,n,i,temp;
clrscr();
printf("enter the number of element in array\n");
scanf("%d",&n);
printf("enter %d element\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
temp=n-1;
printf("enter the location which you want to delete element");
scanf("%d",&pos);
if(pos>n+1)
{
printf("enter valid position");           //deletion in array//
exit(0);
}
for(i=pos-1;i<n-1;i++)
{
arr[i]=arr[i+1];
}
n=n-1;
printf("the new array is\n");
for(i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}
getch();
}*/