/*#include<stdio.h>
#include<conio.h>
void main()
{
int start,middle,i,item,m,end,a[10];
clrscr();
printf("enter the number of elements");
scanf("%d",&m);
printf("enter %d elements",m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter the item to be search");
scanf("%d",&item);
start=0;
end=m-1;
middle=(start+end)/2;
while(item!=a[middle]&&start<=end)
{
if(item>a[middle])                              //binary search//
start=middle+1;
else
end=middle-1;
middle=(start+end)/2;
}
if(item==a[middle])
{
printf("%d found at position %d",item,middle+1);
}
else
{
printf("item is not present");
}
getch();
}*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],m,i,item;
clrscr();
printf("enter the number of elements");
scanf("%d",&m);
printf("enter %d elements",m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter the item to be search");
scanf("%d",&item);                                     //linear search//
for(i=0;i<m;i++)
{
if(item==a[i])
{
printf("itm found at pos %d",i+1);
break;
}
}
if(i==m)
{
printf("item not present");
}
getch();
}






