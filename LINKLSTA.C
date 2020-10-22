#include<stdio.h>
#include<conio.h>
#define MAX 20
int insert();
void search(int item);
void del();
void display();
int arr[MAX];
int n;
main()
{
int choice,item,pos;
while(1)
{
printf("1.input list\n");
printf("2.insert\n");
printf("3.search\n");
printf("4.delete\n");
printf("5.display\n");
printf("6.quit\n\n");
printf("enter your chice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
 printf("enter number if element");
 scanf("%d",&n);
 input(n);
 break;
case 2:
 insert();
break;
case 3:
 printf("enter the element to be searched");
 scanf("%d",&item);
 pos=search(item);
 if(pos>=1)
 printf("%d is found at %d",item,pos);
 else
 printf("%d is not found",item);
 break;
case 4:
 del();
 break;
case 5:
 display();
 break;
case 6:
 exit(0);
 break;
default:
 printf("wrong input");
}
}
}
input()
{
int i;
for(i=0;i<n;i++);
{
printf("enter the element%d",i+1);
scanf("%d",&arr[i]);
}
}
int search(int item)
{
int i;
for(i=0;i<n;i++)
{
if(item==arr[i])
return(i+1);
}
return(0);
}
 void insert()
{
int temp,item,position;
if(n==MAX)
{
printf("list is overflow");
return(0);
}
printf("enter the position for insertion");
scanf("%d",&position);
printf("enter the value");
scanf("%d",&item);
if(position==n+1)
{
arr[n]=item;
n=n+1;
return(0);
}
temp=n-1;
while(temp>=position-1)
{
arr[temp+1]=arr[temp];
temp--;
}
arr[position-1]=item;
n=n+1;
}
void del()
{
int temp,pos,item;
printf("entetr the element to delete");
scanf("%d",&item);
if(item==arr[n-1]);
{
n=n-1;
return(0);
}
pos=search(item);
temp=pos-1;
while(temp<=n-1)
{
arr[temp]=arr[temp+1];
temp++;
}
n=n-1;
}
void display()
{
int i;
if(n==0)
{
printf("list is empty");
return(0);
}
for(i=0;i<n;i++);
printf("values at position%d:%d\n",i=i+1,arr[i]);
getch();
}