/*#include<stdio.h>
#include<conio.h>
void main()
{
int i=2;
clrscr();
while(i<=20)
{
printf("%d\n",i);
i=i+2;
}
getch();
}*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[2][2],b[2][2],c[2][2];
 int i,j;
 clrscr();
 for(i=0;i<2;i++)
 {
 for(j=0;j<4;j++)
 {
 c[i][j]=0;
 }
 }
 printf("\n enter first matrix");
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 printf("\n enter second matrix");
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 scanf("%d",&b[i][j]);
 }
 }
 printf("\n multipication of matrix is");
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 c[i][j]=c[i][j]+a[i][j]*b[i][j];
 }
 }
 printf("\n");
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 printf("5%d\t",c[i][j]);
 }
 printf("\n");
 }
 getch();
 }

/* #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int total,boys;
 clrscr();
 printf("\n\t\t welcome to boys school");
 printf("\n\n enter the total");
 scanf("%d",&total);

  boys=(total>0)?total:0;

  printf("\n number of boys is %d",boys);


 getch();
 }*/
/*
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n1,n2,choice;
 clrscr();
 printf("\n enter two numbers\n");
 scanf("%d %d",&n1,&n2);
 printf("\n1 additiom");
 printf("\n2 subtraction");


 printf("\n enter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 printf("\n tne addition of two num is  %d",n1+n2);
 break;
 case 2:
 printf("\n tne subtraction of two num is  %d",n1-n2);
 break;
 }
 getch();
 } */

/* #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int num;
 clrscr();
 printf("enter the num");
 scanf("%d",&num);
 if(num%2==0)
 {
 printf("\n num is even");
 }
 else
 {
 printf("\n the num is odd");
 }
 getch();
 }*/
/* #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int num=1,square;

 while(num<=10)
 {
 square=num*num;
 printf("\n number=%d and its square=%d",num,square);
 num=num+1;
 }
 getch();
 }*/
/*#include<stdio.h>
#include<conio.h>
# define MAX 100
void main()
{
 int arr[MAX],n,i,temp;
 clrscr();
 printf("enter size of arry: ");
 scanf("%d",&n);
 printf("enter %d element\n",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 for(i=0;i<n/2;i++)
 {
 temp=arr[i];
 arr[i]=arr[n-i-1];
 arr[n-i-1]=temp;
 }
 printf("array after reversing :");
 for(i=0;i<n;i++)
 {
 printf("%d\t\n",arr[i]);
 }
 getch();
 }*/

/* #include<stdio.h>
 #include<conio.h>
 #include<string.h>

 void main()
 {
 char str[10]="hello",str2[1];
 clrscr();
 strcpy (str2,str);
 printf("\n the string2 is %s",str2);
 getch();
 }*/

 /*#include<stdio.h>
 #include<conio.h>
 #include<string.h>
 void main()
 {
 char str[10],str2[20];
 int i;
 clrscr();
 printf("\n enter two strings\n");
 scanf("%s %s",&str,&str2);
 i=strcmp(str,str2);
 if(i==0)
 {
 printf("\n both string are same");
 }
 else
 {
 printf("\n string are different");
 }
 getch();
 }*/
/* #include<stdio.h>
 #include<conio.h>
 void main()
 {
 char str[20],str2[20];

 clrscr();
 printf("\n enter two strings\n");
 scanf(" %s %s",&str,&str2);
 strcat (str,str2);
 printf(" string joined are %s",str);
 getch();
 }*/
/* #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 void main()
 {
 char str[10];
 int len;
  clrscr();
  printf("enter a string\n");
  gets(str);
  len = strlen(str);
  printf("\n the length of string is %d",len);
  getch();
  }*/
   /*  #include<stdio.h>
     #include<conio.h>
     void main()
     {
     int a[4]={10,20,30,40};
     clrscr();
     printf("\n declaration of arry");
     printf("\n %d",a[0]);
     printf("\n %d",a[1]);
     printf("\n %d",a[2]);
     printf("\n %d",a[3]);
     getch();
     }*/
    /* #include<stdio.h>
     #include<conio.h>
     void main()
     {
     int a[5],min,i;
     clrscr();
     printf("enter element of the array\n");
     for(i=0;i<5;i++)
     scanf("%d",&a[i]);
     min=a[0];
     for(i=1;i<5;i++)
     {
     if(min>a[i])
     min=a[i];
     }
     printf("minimun no= %d",min);
     getch();
     }*/
  /*  #include<stdio.h>
     #include<conio.h>
     void main()
     {
     int a[5],i,mul;

     clrscr();
     printf("\n enter the element of array\n");
     for(i=0;i<5;i++)
     scanf("%d",&a[i]);
     for(i=0;i<5;i++)
     mul=mul*a[i];
     printf("multiplication=%d\n",mul);

     getch();
     }*/
    /* #include<stdio.h>
     #include<conio.h>
     void main()
     {
     int a[2][3],b[2][3],c[2][3];
     int i,j;
     clrscr();
     printf("\n enter first matrix");
     for(i=0;i<2;i++)
     {
     for(j=0;j<2;j++)
     {
     scanf("%d",&a[i][j]);
     }
     }
     printf("\n enter second matrix");
     for(i=0;i<2;i++)
     {
     for(j=0;j<2;j++)
     {
     scanf("%d",&b[i][j]);
     }
     }
     printf("\n the addition of matrix is :");
     for(i=0;i<2;i++)
     {
     for(j=0;j<2;j++)
     c[i][j]=a[i][j]+b[i][j];
     }

     for(i=0;i<2;i++)
     {
     printf("\n");
     for(j=0;j<2;j++)
     {
     printf("%d\t",c[i][j]);
      }
      getch();
      }*/
     /* #include<stdio.h>
      #include<conio.h>
      void main()
      {
      int i,j;
      clrscr();
      for(i=1;i<=4;i++)
      {
      for(j=1;j<=i;j++)
      {
      printf("\n%d",j);
      }
      printf("\n");
      }
      getch();
      }*/

 /* #include<stdio.h>
  #include<conio.h>
  #include<graphics.h>
  void main()
  {
  int gd=DETECT,gm;
  initgraph(& gd,&gm,"C:\\TC\\BGI");
  arc(200,250,0,150,60);
  getch();
  closegraph();

  }*/


















