//write parrern program like:
    // 1
//   1   2
// 1   2    3
//   1   2
//     1//
// please//
/*#include<stdio.h>
#include<conio.h>
void main()
{
int num,r,sum=0,temp;
clrscr();
printf("enter the number\n");
scanf("%d",&num);
temp=num;
if(num==0)
exit();
while(num)
{
r=num%10;
num=num/10;
sum=sum*10+r;
}
if(sum==temp)

printf("pallindrone number");

else

printf("not  pallindrone number");

getch();
}*/

/*#include<stdio.h>
#include<conio.h>
void main()
{
int num,a;

clrscr();
printf("enter the number");
scanf("%d",&num);
a=num%10;
printf("the modules is %d",a);
getch();
}*/
#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
int a,f;
clrscr();
printf("enter the number");
scanf("%d",&a);
f=factorial(a);
printf("the factorial of %dis:%d",a,f);
return 0;
}
int factorial(int a)
{
if(a==1)
{
return 1;
}
else
{
return(a*factorial(a-1));
}
}
/*#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,i,j,flag,temp,count=0;
printf("enter the value of num1and num2");
scanf("%d %d",&num1,&num2);
printf("the prime numbers are\n");
temp=num1;
if(num1%2==0)
{
num1++;
}
for(i=num1;i<=num2;i=i+2)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d\n",i);
count++;
}
}
printf("prime numbers between %d and %d=%d\n",temp,num2,count);
getch();
}*/