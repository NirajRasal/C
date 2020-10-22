#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void main()
{
   int i,x;
   char password[100],ch;
   clrscr();
   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d",&x);
   //using switch case statements
   switch(x)
   {
   case 1:
   printf("\nPlease enter a string:(less than 100 characters)\t");
   scanf("%s",&password);
      for(i=0;(i<100&&password[i]!='\0');i++)
      {
	password[i]=password[i]+3;
      } //the key for encryption is 3 that is added to ASCII value
      printf("\nEncrypted string: %s\n",password);
      break;

   case 2:
   printf("\nPlease enter a string:\t");
   scanf("%s",&password);
   printf("original string is:",password);
      for(i=0;(i<100&&password[i]!='\0');i++)
      {
	password[i]=password[i]-3;
      } //the key for encryption is 3 that is subtracted to ASCII value
      printf("\nDecrypted string: %s\n",password);
      break;
   }
   getch();
}