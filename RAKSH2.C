#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void creatlist(int n);
void display();
struct node
{
int data;
struct node *addr_nerxt;
}*start,*curr,*temp;
void main()
{
int n;
int choice;
do
{
clrscr();
printf("\n enter any number");
scanf("%d",&n);
printf("\n");
printf("\t\t\t\t choice?");
scanf("%d",&choice);
}
while(choice==1);
getch();
}
void create(int n)
{
temp=(void n)malloc(sizeof(struct node));
temp->data=n;
temp->addr_next=NULL;
if(start==NULL)
{
start=temp;
}
else
{
curr=start;
{
while(curr->addr_next!=NULL)
{
curr=curr->addr_next;
}
}
curr->addr_next=temp;
}
}
void display()
{
if(start==NULL)
{
printf("list is empty");
}
else
{
curr=start;
while(curr!=NULL)
{
printf("%d%d->",curr->data,curr->addr_next);
curr=curr->addr_next;
}
}
}
