#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
void creatlist();
void display();
void insertat();
void addbeg();
void search();
void count();
void addafter();
void delet();
void delett();
struct node
{
int info;
struct node *link;
}*start;
void main ()
{
int n,m,i,choice;
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
insertat();
addbeg();
search();
count();
addafter();
delet();
delett();
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
void insertat()
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
void addbeg()
{
int node,data;
struct node *tmp;
printf("enter the elemen to add at first");
scanf("%d",&data);
tmp=(void *)malloc(sizeof(struct node));
tmp->info=data;
tmp->link=start;
start=tmp;
display();
}
void search()
{
int data,pos=1;
struct node *ptr=start;
printf("enter the element to be searched");
scanf("%d",&data);
while(ptr!=NULL)
{
if(ptr->info==data)
{
printf("%d found at %d position",data,pos);
}
ptr=ptr->link;
pos++;
}
}
void count()
{
struct node *tmp;
int size=0;
tmp=start;
while(tmp!=NULL)
{
size++;
tmp=tmp->link;
}
printf("\nsize of link list is  %d\n",size);
}
void addafter()
{
int pos,i,n,data;
struct node *q;
struct node *tmp;
printf("enter the position after adding node");
scanf("%d",&pos);
printf("enter the value of new node");
scanf("%d",&data);
q=start;
for(i=1;i<pos;i++)
{
q=q->link;
}
tmp=(void *)malloc(sizeof(struct node));
tmp->link=q->link;
tmp->info=data;
q->link=tmp;
display();
}
void delet()
{
int i=1,pos;
struct node *curr,*tmp;
curr=start;
printf("enter the position to delet");
scanf("%d",&pos);
while(i<pos-1)
{
curr=curr->link;
i++;
}
tmp=malloc(sizeof(struct node));
tmp=curr->link;
curr->link=tmp->link;
tmp->link=NULL;
display();
}
void delett()
{
int item;
struct node *loc,*locp,*save,*ptr;
loc=NULL;
printf("enter the info to delet");
scanf("%d",&item);
if(start==NULL)
{
printf("list is empty");
}
else if(start->info==item)
{
loc=start;
locp=NULL;
}
else
{
save=start;
ptr=start->link;
while(ptr!=NULL)
{
if(ptr->info==item)
{
loc=ptr;
locp=save;
}
save=ptr;
ptr=ptr->link;
}
}
if(loc==NULL)
{
printf("element is not present");
}
else if(locp==NULL)
{
start=start->link;
}
else
{
locp->link=loc->link;
display();
}
}






