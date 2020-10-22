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
middle=(start+end)/2;                                 //binary search//
}
if(item==a[middle])
printf("%d is found at position %d",item,middle+1);
if(start>end)
printf("%d is not found",item);
getch();
}

















