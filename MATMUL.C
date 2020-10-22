#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a[2][2],b[2][2],c[2][2];
 int i,j,k;
 clrscr();
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 c[i][j]=0;
 }
 }
 printf("\n enter first matrix");
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 printf("\n enter second matrix");
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 scanf("%d",&b[i][j]);
 }
 }
 printf("\n multipication of matrix is");
 for(i=0;i<2;i++)
 {
 for(k=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 c[i][j]+=a[i][j]*b[i][j];
 }
 }
 printf("\n");
 for(i=0;i<2;i++)
 {
 for(j=0;j<2;j++)
 {
 printf("%d\t",c[i][j]);
 }
 printf("\n");
 }
 getch();
 }
 }