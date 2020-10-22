/*#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],i,j,temp,n,xchange;
clrscr();
printf("enter the number of element\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nentet %d element\n",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
xchange=0;
for(j=0;j<n-1-i;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
xchange++;
}
}
if(xchange==0)
{
break;
}
}                                         //bubble sort//
printf("\nsorted list is:\n");
for(i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}
getch();
}*/



/*#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],i,j,temp,n,smallest,k;
clrscr();
printf("enter the number of element\n");
scanf("%d",&n);
for(i=0;i<n;i++)                            //selection sort//
{
printf("\nentet %d element\n",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
smallest=i;
for(k=i+1;k<n;k++)
{
if(arr[smallest]>arr[k])
{
smallest=k;
}
if(i!=smallest)
{
temp=arr[i];
arr[i]=arr[smallest];
arr[smallest]=temp;
}
}
}
printf("\nsorted list is:\n");
for(i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}
getch();
*/



#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],i,j,n,k;
clrscr();
printf("enter the number of element\n");
scanf("%d",&n);
for(i=0;i<n;i++)                                //insertion sort//
{
printf("\nentet %d element\n",i+1);
scanf("%d",&arr[i]);
}
for(j=1;j<n;j++)
{
k=arr[j];
for(i=j-1;i>=0&&k<arr[i];i--)
arr[i+1]=arr[i];
arr[i+1]=k;
}
printf("\n the sorted list is:");
for(i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}
getch();
}