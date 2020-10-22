#include<stdio.h>
#include<conio.h>
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9,0,1,2,5},*ip=arr+4;
clrscr();
printf("%d \n",ip[1]);
printf("%d \n",ip[5]);
getch();
return 0;
}