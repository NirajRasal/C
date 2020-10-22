#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void createlist(int data);
void display();
void exit();
struct node
{
int info;
struct node *link;
}*start;
void main()
{
int choice,n,m,pos,i;
start=NULL;
while(1)
{
printf("1.createlist");
printf("2.display");
printf("enter your choice");
scanf("%d",&choice);
getch();
switch(choice)
{
case 1:
printf("how many nodes you want");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the element");
scanf("%d",&m);
createlist(m);
}
break;
case 2:
{
 display();
 break;
 }
 }
 }
 }
void createlist(int data)
 {
 struct node *q,*tmp;
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
 struct node *q;
 if(start==NULL)
 {
 printf("list is empty");
 }
 else
 {
 q=start;
 printf("list is \n");
 while(q!=NULL)
 {
 printf("%d",q->link);
 q=q->link;
 }
 printf("\n");
 }
 }
void exit()
{
exit();
}
