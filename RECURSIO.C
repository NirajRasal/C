/*#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
int num,f;
clrscr();
printf("ente the number\n");
scanf("%d",&num);
f=fact(num);
printf("factorial is %d",f);
getch();
}
int fact(int n)
{
if(n==0)
return 1;
else
return(n*fact(n-1));
}*/





#include<stdio.h>
#include<conio.h>
int fibo(int);
int main()
{
int num,i,r;
int result;
clrscr();
printf("enter how many terms tobe printed");
scanf("%d",&num);
if(num<0)
{
printf("error");
}
printf("fibonaccie series is:");
for(i=0;i<num;i++)
{
r=fibo(i);
printf("%5d",r);
}
getch();
}
int fibo(int num)
{
int f;
if(num==0)
{
return 0;
}
else if(num==1)
{
return 1;
}
else
{
f=(fibo(num-1)+fibo(num-2));
return (f);
}
}

