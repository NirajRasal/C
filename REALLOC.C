/*#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void main()
{
char *ptr;
clrscr();                                //realloc//
ptr=(char *)malloc(6);
ptr="niraj";
printf("%s is in memory block\n",ptr);
ptr=(char *)realloc(ptr,12);
strcpy(ptr,"niraj rasal");
printf("%s is in memory block",ptr);
getch();
}*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("enter the element in array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}                                           //traversing array//
printf("the entered are\n ");
for(i=0;i<5;i++)
{
printf("\n%d",a[i]);
}
getch();
}
/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int num,i,*ptr,sum=0;
clrscr();
printf("enter number of element");
scanf("%d",&num);                         //calloc and free//
ptr=(int *)calloc(num,10);
if(ptr==NULL)
{
printf("error memory is not allocated");
exit(0);
}
printf("enter elements of array");
for(i=0;i<num;i++)
{
scanf("%d",(ptr+i));
sum += *(ptr+i);
}
printf("sum is %d",sum);
free(ptr);
getch();
}*/









