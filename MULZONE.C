#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
clrscr();
printf("enter rows and columns of first matrix");
scanf("%d%d",&r1,&c1);
printf("enter rows and columns of second matrix");
scanf("%d%d",&r2,&c2);
printf("enter element of matrix 1");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("enter element a %d%d\t",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("enter element of second matrix");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("enter element b %d%d\t",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
mult[i][j]=0;
}
}
for(i=0;i<r1;i++)
for(j=0;j<c2;j++)
for(k=0;k<c1;k++)
{
mult[i][j]+=a[i][k]*b[k][j];
}


printf("output matrix\n");
for(i=0;i<r1;i++)
{
printf("\n");
for(j=0;j<c2;j++)
{
printf("%d\t",mult[i][j]);
}
}
getch();
}