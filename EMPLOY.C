#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void display();
void create();
void update();
struct emp
{
int id;
char *name;
}*emp1,*emp3;
void display();
void create();
void update();
FILE *fp,*fp1;
int count=0;
void main(int argc,char **argv)
{
int i,n,ch;
printf("1.create record");
printf("2.display record");
printf("3.update record");
printf("exit");
while(1)
{
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
fp=fopen(argv[1],"a");
create();
break;
case 2:
fp1=fopen(argv[1],"rb");
display();
break;
case 3:
fp1=fopen(argv[1],"r+");
update();
break;
case 4:
exit(0);
}
}
}
void create()


{
int i;
char *p;
emp1=(struct emp *)malloc(sizeof(struct emp));
emp1->name=(char *)malloc((200)*(sizeof(char)));
printf("enter the name of employ");
scanf("%s",&emp1->name);
printf("enter employ id");
scanf("%d",&emp1->id);
fwrite(&emp1->id,(sizeof(emp1->id)),1,fp);
fwrite(&emp1->name,200,1,fp);
count++;
fclose(fp);
}
