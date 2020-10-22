#include<stdio.h>
#include<conio.h>
void heapup(int[],int,int);
void heapdown(int[],int,int);
void heapsort(int x[],int n)
{
int i,t;
for(i=0;i<n;i++)
{
heapup(x,0,i+1);
}
for(i=n-1;i>=0;i--)
{
t=x[0];
x[0]=x[i];
x[i]=t;
heapdown(x,0,i-1);
}
}
void heapup(int x[],int r,int b)
{
int t,p;
if(b>r)
{
p=(b-1)/2;
if(x[p]<x[b])
{
t=x[p];
x[p]=x[b];
x[b]=t;
heapup(x,r,p);
}
}
}
void heapdown(int x[],int r,int b)
{
int lc=2*r+1;
int rc=2*r+2;
int mc,t;
if(lc<=b)
{
if(lc==b)
mc=lc;
else if(x[lc]>x[rc])
mc=lc;
else
mc=rc;
if(x[r]<x[mc])
{
t=x[r];
x[r]=x[mc];
x[mc]=t;
heapdown(x,mc,b);
}
}
}
void main(void)
{
int x[20]={0},i,n;
clrscr();
printf("enter the number of elements");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
heapsort(x,n);
printf("sorted asrray is  \n\n");
for(i=0;i<n;i++)
{
printf("\n\n%d",x[i]);
}
getch();
}
