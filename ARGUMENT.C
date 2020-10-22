/*#include<stdio.h>
#include<conio.h>
void swap(int *num1,int *num2)
{
int temp;
temp=*num1;
*num1=*num2;
*num2=temp;
}
void main()
{
int num1=8,num2=6;
clrscr();
printf("the numbers before swapping are  %d and %d",num1,num2);

swap(&num1,&num2);
printf("\nthe number after swapping are  %d and %d",num1,num2);
getch();
}*/
/*#include<stdio.h>
#include<conio.h>
#define n 10
void main()
{
int count;
float sum,avarage,number;
clrscr();
sum=0;
count=0;
while(count<n)                     ///to find sum and avarage of n numbers///
{
scanf("%f",&number);
sum=sum+number;
count=count+1;
}
avarage=sum/n;
printf("n=%d sum=%f",n,sum);
printf("avarge=%f",avarage);
getch();
} */

/*#include<stdio.h>
#include<conio.h>
void main()
{
int year,period;
float amount,interate,value;
clrscr();
printf("input amount, interest rate, period\n");
scanf("%f %f %d",&amount,&interate,&period);
printf("\n");
year=1;
while(year<=period)
{
 value=amount+interate*amount;
 printf("%d RS %f\n",year,value);
 amount=value;
 year=year+1;
 }
 getch();
 }*/
/* #include<stdio.h>
 #include<conio.h>
 void main()
 {
 float celcius,fa;
 clrscr();
 printf("enter fa");
 scanf("%f",&fa);
 celcius=(fa-32)/1.8;
 printf(" the temp is %f",celcius);
 getch();
 }*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int fact;
 if(n==1)
 return(1);
 else
 fact=n*factorial(n-1));
 return(fact);
 getch();
 }
