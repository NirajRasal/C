#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void creatlist();
void addnode();
void display();
void addbeg();
void delet();
struct node
{
int info;
struct node *link;
}*start;
void main()
{
int ch;
clrscr();
start=NULL;
do
{
printf("\n1.creat list");
printf("\n2.display");
printf("\n3.addnode");
printf("\n4.add at begining");
printf("\n5.delete");
printf("\n6.exit");
printf("\nenter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
creatlist();
break;
}
case 2:
{
display();
break;
}
case 3:
{
addnode();
break;
}
case 4:
{
addbeg();
break;
}
case 5:
{
delet();
break;
}
case 6:
{
printf("end of the program");
break;
}
}
}
while(ch!=6);
getch();
}
void creatlist()
{
int data,n,i,m,num;
struct node *tmp;
struct node *q;
printf("how much nodes\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter data for %d nodes",i+1);
scanf("%d",&num);
}
tmp=malloc(sizeof(struct node));
tmp->info=num;
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
printf("\n%d\n",s->info);
s=s->link;
}
}
}
void addnode()
{
int pos,i,n,data;
struct node *q;
struct node *tmp;
q=start;
printf("\nenter the position for adding node");
scanf("%d",&pos);
printf("\nenter the value of new node");
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
void addbeg()
{
int data,start;
struct node *tmp;
printf("\nenter the elemen to add at first");
scanf("%d",&data);
tmp=(void *)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=start;
start=tmp;
display();
}
void delet()
{
int data,m,i=1,pos;
struct node *tmp,*curr;
printf("\nenter the position in link list u want to delet");
scanf("%d",&pos);
curr=start;
while(i<pos-1)
{
curr=start->link;
i++;
}
tmp=malloc(sizeof(struct node));
tmp=curr->link;
curr->link=tmp->link;
tmp->link=NULL;
}
