#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void creatlist(int);
void display();
void addbeg();
void addafter();
void delet();
void count();
struct node
{
struct node *prev;
int info;
struct node *next;
}*start;
void main()
{
int n,num,i,choice;
start=NULL;
clrscr();
do
{
printf("\n1.create \n2.display \n3.addbeg \n4.addafter \n5.delet \n6.count\n");
printf("\nenter ur choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nenter the number  of element\n");
scanf("%d",&n);
printf("\nente %d element\n",n);
for(i=0;i<n;i++)
{
scanf("\n%d",&num);
creatlist(num);
}
break;
case 2:
printf("\n");
display();
break;
case 3:

addbeg();
break;

case 4:

addafter();
break;

case 5:
delet();
break;

case 6:
count();
break;
}
printf("\ndo you want to continue press 1");
scanf("%d",&choice);
}
while(choice==1);
}
void creatlist(int num)
{
struct node *q,*tmp;
tmp=malloc(sizeof(struct node));
tmp->info=num;
tmp->next=NULL;
if(start==NULL)
{
start->prev=NULL;
start=tmp;
tmp->prev=NULL;

}
else
{
q=start;
while(q->next!=NULL)
{
q=q->next;
}
q->next=tmp;
tmp->prev=q;
}
}
void display()
{
struct node *s;
if(start==NULL)
{
printf("\n\nlist is empty");
}
else
{
s=start;
while(s!=NULL)
{
printf("%d\n",s->info);
s=s->next;
}
}
}
void addbeg()
{
int data;
struct node *tmp;
printf("\nenter the value of node to add first");
scanf("%d",&data);
tmp=malloc(sizeof(struct node));
tmp->info=data;
tmp->next=start;
tmp->prev=NULL;
start->prev=tmp;
start=tmp;
}
void addafter()
{
struct node *tmp,*q;
int i,num,c;
printf("\nenter the element");
scanf("%d",&num);
printf("\n enter the posion after");
scanf("%d",&c);
q=start;
for(i=1;i<c;i++)
{
q=q->next;
if(q==NULL)
{
printf("\nwrong input");
exit(0);
}
}
tmp=malloc(sizeof(struct node));
tmp->info=num;
q->next->prev=tmp;
tmp->next=q->next;
tmp->prev=q;
q->next=tmp;
}
void delet()
{
int i=1,pos;
struct node *q,*curr;
if(start==NULL)
{
printf("list is empty underflow");
}
else
{
printf("enter thge position to delete");
scanf("%d",&pos);
curr=start;
q=start->next;
while(i<pos-1)
{
curr=curr->next;
q=q->next;
i++;
}
curr->next=q->next;
q->next->prev=curr;
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
tmp=tmp->next;
}
printf("\nsize of link list is  %d\n",size);
}
