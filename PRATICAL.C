/*#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,e;
 float f;
 clrscr();
 printf("\n enter the value of a and b\n");
 scanf("%d",&a);
 scanf("%d",&b);
 {
 c=a+b;
 printf("\n the addition of numbers is %d\n",c);
 d=a-b;
 printf("\n the subtraction of numbers if %d\n",d);
 e=a*b;
 printf("\n the multiplication of numbers is %d\n",e);
 f=a/b;
 printf("\n the division of numbers is %f\n",f);
 printf("\n\t\n\n\t press any key to exit");
 }
 getch();
 }*/

/* #include<stdio.h>
 #include<conio.h>
 void main(void)
 {
 int a,b;
 clrscr();
 printf("\n enter the value of a and b\n");
 scanf("%d",&a);
 scanf("%d",&b);
 if(a<b)
 {
 printf("\n a is the smallest number");
 }
 else
 {
 printf("b is the smallest number");
 }
 getch();
 }*/



/* #include<stdio.h>
 #include<conio.h>
 #include<ctype.h>
 void main()
 {
 int a=10,b=20,x;          //right//
 clrscr();

 x=(a>b)?a:b;

 puts(x);
 getch();
 }*/



/*#include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b,c;
 clrscr();
 printf("\n enter the value of three  num");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c)
 {
 printf("\n a is greater");
 }
 else
 {
 if(b>c)
 printf("\n b is greater");
 else
 printf("\n c is greater");
 }
 getch();
 }*/

 /* #include<stdio.h>
  #include<conio.h>
  void main()
  {
  char n;                         //reading a character//
  clrscr();
  printf("\n\n enter the character\t");
  scanf("%s",n);
  printf("the charcter is %s",n);
  getch();
  }*/

 /*  #include<stdio.h>
   #include<conio.h>

   void main()
   {
   int a,b;
   float area1,area2,area3,area4;
   clrscr();
   printf("\n enter the value of numbers\n");
   scanf("%d %d",&a,&b);

   area1=0.5*a*b;
   printf("\n the area of triangle is%f",area1);

   area2=3.14*a*a;
   printf("\n the area of circle is%f",area2);
   area3=a*b;
   printf("\n the area of rectangle is %f",area3);
   area4=b*b;
   printf("\n the area of square is %f",area4);
   printf("\n\n\t press any key to exit");
   getch();
   }*/

   /* #include<stdio.h>
    #include<conio.h>
    void main()
    {
    int a,sum=0,b,value;
     clrscr();
     printf("\n enter the integer");
     scanf("%d",&a);
     printf("\n you enterred %d",a);
     for(b=0;b<=a;b++)
     {
     scanf("%d",value);
     sum=sum+value;
     }
     printf("\n sum of entered integer is %d",sum);
     getch();
     } */
    /* #include<stdio.h>
     #include<conio.h>
     void main()
     {
     int a=6,expr;
     clrscr();
     expr=a+!a+  ++a;
     printf("%d",expr);
     getch();
     } */
    /* #include<stdio.h>
     void main()
     {
     int i=0;
     clrscr();
     for(++i;i==1;i=2)
     printf("in for loop");
     printf("after loop");
     getch();
     }*/
    /*  #include<stdio.h>
      #include<conio.h>
      #include<ctype.h>
      void main()
      {
      char alphabet;
      clrscr();
      printf("enter the alphabet");
      putchar('\n');                     //putchar and getchar//
      alphabet = getchar();
      if (islower(alphabet))
      putchar(toupper(alphabet));
      else
      putchar(tolower(alphabet));
      getch();
      }*/

    /*  #include<stdio.h>
      #include<conio.h>
      void main()
      {
      int num,i,count=0;
      clrscr();
      printf("\n enter the number:");
      scanf("%d",&num);
      for(i=2;i<=num/2;i++)
      {
       if(num%i==0)
       {
       count++;
       break;
       }
       }
       if(count==0 && num!=1)
       printf("%d it is a prime num",num);
       else
       printf("%d is not a prime num",num);
       getch();
       }*/

      /* #include<stdio.h>
       #include<conio.h>

       void main()
       {
       int num,i,count;
       clrscr();
       for(num=1;num<=100;num++)
       {
       count=0;
       for(i=2;i<=num/2;i++)
       {
       if(num%i==0)
       {
       count++;

       break;
       }
       }

       if(count==0 && num!=1)
       printf("%d",num);
       getch();
       }
       }*/

     /*  #include<stdio.h>
       #include<conio.h>
       int add(int x,int y)
       {
       int z;
       z=x+y;
       return z;
       }
       void main()
       {
       int a,b,add;
       clrscr();
       printf("\n enter the numbers");
       scanf("%d %d",&a,&b);
       add=a+b;;
       printf("\n addition of the numbers is %d",add);
       getch();
       }*/

    /*   #include<stdio.h>
       #include<conio.h>
       void main()
       {
       int i,j,n=0;
       clrscr();
       printf("\n enter the num\n");
       scanf("%d",&i);
       {
       for(j=1;j<=i;j++)
       {
       if(i%j==0)
      {
       n++;
       }
       }
       if(n==2)
       printf("\nthe num is prime");
       else
       printf("\n the num is not prime");
       n=0;
       }
       getch();
       } */

    /*  #include<stdio.h>
      #include<conio.h>
      void main()
      {
       char[81],ctr;
       int i,c,end=0,charaters=0,words=0,lines=0;
       clrscr();
       printf("key in the text\n");
       printf("give one space after each word");
       printf("when complete press 'return'\n\n");
       while(end==0)
       {
       c=0;
       while((ctr=getchar())!='\n')
       line[c++]=atr;
       line[c]='\0';
       if(line[0]=='\0')
       break;
       else
       {
       words++;
       for(i=0;line[i]!='\0';i++)
       if(line[i]==' '|| line[i]=='\t')
       words++;
       }
       lines=lines+1;
       charaters=charaters+strlen(line);
       }
       printf("\n");
       printf("numbers of lines %d\n",lines);
       printf("numbers of wortds%d\n",words);
       printf("number of charaters%d\n",charaters);
       getch();
       }*/
   /*  #include<stdio.h>
     #include<conio.h>
     void main()
     {
     int marks;
     clrscr();
     printf("\n enter the marks");
     scanf("%d",&marks);
     if(marks>=70)
     printf("destintion");
     else if(marks>=60)
     printf("first class");               //else if ladder//
     else if(marks>=36)
     printf("second class");
     else
     printf("you are fail");
      getch();
      }*/

 /*   #include<stdio.h>
    #include<conio.h>
    void main()                              //switch case//
    {
    int add,sub,choice,n1,n2;
    clrscr();
    printf("enter numbers\n");
    scanf("%d %d",&n1,&n2);
    printf("what you what to perform\n");
    printf("\n1 addition");
    printf("\n2 subtraction");
    printf("\n enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
      add=n1+n2;
      printf("\n\nthe addition of %d and %d is %d",n1,n2,add);
      break;
      case 2:
      sub=n1-n2;
      printf("\n\nthe subtraction of %d and %d is %d",n1,n2,sub);
      break;
      }
      getch();
      }*/

     /* #include<stdio.h>
      #include<conio.h>
      #define colmax 10
      #define rowmax 10
      void main()
      {
      int row,column,y;
      clrscr();
      row=1;
      printf("     multiplication table    \n");
      printf("----------------------------------------\n");
      do
      {
      column=1;
      do
      {                                      //multiplication table//
      y=row*column;
      printf("%4d",y);
      column=column+1;
      }
      while(column<=colmax);
      printf("\n");
      row=row+1;
      }
      while(row<=rowmax);
      printf("----------------------------------------\n");
      getch();
      }*/

     /* #include<stdio.h>
      #include<conio.h>
      #define max 100
      void main()
      {
       int arr[max],n,i,temp;
       clrscr();
       printf("enter size of array\n");
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
       printf("array after reversing\n");
       for(i=0;i<n;i++)
       {
       printf("%d\t\n",arr[i]);
       getch();
       }
       }*/
      #include<stdio.h>
      #include<conio.h>
      #include<alloc.h>
      struct book
      {

      char name[9];
      int price;
      }b;
      void main()
      {
      struct book;
      char *ptr;
      ptr=(char *)malloc(10);
      clrscr();
      printf("\n enter store name \n");
      scanf("%s",&ptr);
      printf("enter book name and price\n");
      scanf("%s %d",&b.name,&b.price);
      printf("the details of book is as follows:\n");
      printf("store name %s\n",&ptr);
      printf("book name %s\n",b.name);
      printf("price %d\n",b.price);
      getch();
      }
     /* #include<stdio.h>
      #include<conio.h>
      void main()
      {
      int *ptr,*ptr1;
      clrscr();
       printf("enter two numbers");
       scanf("%d %d",&ptr,&ptr1);
       if(ptr>ptr1)
       {
       printf("the greatest number is %d",ptr);
       }
       else
       {
       printf("the greatest number is %d",ptr1);
       }
       getch();
       }*/
