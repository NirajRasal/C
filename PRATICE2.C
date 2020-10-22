#include<stdio.h>
#include<conio.h>
#define items 5
#define maxchar 20
void main()
{
char string[items][maxchar],dummy[maxchar];
int i=0,j=0;
clrscr();
printf("ente name of %d items \n",items);
while(i<items)
scanf("%s",string[i++]);
for(i=1;i<items;i++)
{
for(j=1;j<=items-i;j++)
{
if (strcmp (string[j-1], string[j]) >0)
{
strcpy (dummy, string[j-1]);
strcpy (string[j-1], string[j]);
strcpy (string[j], dummy);
}
}
}
printf("\n alphabetical list\n\n");
for(i=0;i<items;i++)
printf("%s",string[i]);
getch();
}

