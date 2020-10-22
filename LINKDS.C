#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node *nodeptr;
  nodeptr creatlist(nodeptr list)
{
nodeptr newnode,temp;
int i,n;
printf("\n how many elements");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
newnode=(nodeptr)malloc(sizeof(struct node));
newnode->next=NULL;
printf("\n enter the element");
scanf("%d",&newnode->data);
if(list==NULL)
list=temp=newnode;
else
{
temp->next=newnode;
temp=newnode;
}
}
return list;
}
  nodeptr insert(nodeptr list,int n,int pos)
{
nodeptr newnode,temp;
int i;
newnode=(nodeptr)malloc(sizeof(struct node));
newnode->next=NULL;
newnode->data=n;
if(list==NULL)
{
list=newnode;
return list;
}
if(pos==1)
{
newnode->next=list;
list=newnode;
for(i=0,temp=list;i<=pos-2 && temp->next!=NULL;i++)
temp=temp->next;
newnode->next=temp->next;
temp->next=newnode;
return list;
}
display()
{
nodeptr temp;
for(temp=link,; temp!=NULL; temp=temp->next)
 {
 printf("%d\t",temp->data);
 }
}
void main()
{
nodeptr list=NULL;
int choice,n,pos;
do
{
printf("\n1 creat");
printf("\n2 insert");
printf("\n3 display");
printf("\n4 exit");
switch(choice)
{
case 1:
list=creatlist(list);
break;
case 2:
printf("enter the element and position");
scanf("%d%d",&n,&pos);
list=insert(list,n,pos);
display(list);
break;
case 3:
display(list);
break;
}
getch();
}
while(choice!=4);
getch();
};
};


