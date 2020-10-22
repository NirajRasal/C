#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
void creatlist(int);
void display();
void addnode();
void addafter();
struct node
{
int info;
struct node *link;
}*start;
void main()
{
int n,m,i;
clrscr();
start=NULL;
printf("how much nodes\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter data for %d nodes",i+1);
scanf("%d",&m);
creatlist(m);
}
display();
addnode();
addafter();
getch();
}
void creatlist(int data)
{
struct node *tmp;
struct node *q;
tmp=(void *)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=NULL;
if(start==NULL)
{
start=tmp;
}
else
{
q=start;
while(q->link!=NULL)
{
q=q->link;
}
q->link=tmp;
}
}
void display()
{
struct node *s;
if(start==NULL)
{
printf("list is empty");
}
else
{
s=start;
while(s!=NULL)
{
printf("%d\n",s->info);
s=s->link;
}
}
}
void addnode()
{

int pos,i,n,data;
struct node *q;
struct node *tmp;
printf("enter the position for adding node");
scanf("%d",&pos);
printf("enter the value of new node");
scanf("%d",&data);

q=start;
for(i=1;i<pos-1;i++)
{
q=q->link;
}
tmp=(void *)malloc(sizeof(struct node));
tmp->link=q->link;
tmp->info=data;
q->link=tmp;
display();
}
void addafter()
{
int pos,i,data,last;
struct node *q;
struct node *tmp;
printf("enter the position after adding node");
scanf("%d",&pos);
printf("enter the value of new node");
scanf("%d",&data);
for(i=0;i<pos-1;i++)
{
q=q->link;
}
tmp=(void *)malloc(sizeof(struct node));
tmp->link=q->link;
tmp->info=data;
q->link=tmp;
if(q==last)
{
last=tmp;
}
display();
}