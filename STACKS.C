/*#include<stdio.h>
#include<conio.h>
#define MAX 5
void push();
void pop();
void display();
void create();
int top=-1;
int stack[MAX];
void main()
{                                      //using array//
int choice;
clrscr();
do
{
printf("\n1.push");
printf("\n2.pop");
printf("\n3.display");
printf("\n4.exit");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("end of program");
break;
}
}
}
while(choice!=4);
getch();
}
void push()
{
int data;
if(top==(MAX-1))
{
printf("stack is overflow");
}
else
{
printf("enter the item to be pushed in stack");
scanf("%d",&data);
top=top+1;
stack[top]=data;
}
}
void pop()
{
if(top==-1)
{
printf("stack is underflow");
}
else
{
printf("popped element is\t%d\n",stack[top]);
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty");
}
else
{
printf("stack element is \n");
for(i=top;i>=0;i--)
{
printf("%d\n\t",stack[i]);
}
}
}*/


#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#define MAX 5
void push();
void pop();
void display();
void create();
struct node
{
int info;
struct node *next;
}*top=NULL;
void main()
{
int choice;
clrscr();
do
{
printf("\n1.push");
printf("\n2.pop");
printf("\n3.display");
printf("\n4.exit");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("end of program");
break;
}
}
}
while(choice!=4);
getch();
}
void push()
{
int data;
struct node *tmp;
printf("enter the item to be pushed in stack");
scanf("%d",&data);
tmp=malloc(sizeof(struct node));
tmp->info=data;
if(top==NULL)
{
tmp->next=NULL;
}
else
{
tmp->next=top;
}
top=tmp;
printf("\n\tinsertion is succesfull");
}
void pop()
{
struct node *tmp;
tmp=malloc(sizeof(struct node));
if(top==NULL)
{
printf("stack is underflow");
}
else
{
tmp=top;
printf("popped element is %d\n",tmp->info);
top=tmp->next;
free(tmp);
}
}
void display()
{
int i;
struct node *tmp=top;
if(top==NULL)
{
printf("stack is empty");
}
else
{
while(tmp->next!=NULL)
{
printf("\n%d",tmp->info);
tmp=tmp->next;
}
printf("\n%d",tmp->info);
}
}
