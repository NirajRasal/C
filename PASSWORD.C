#include<stdio.h>
#include<conio.h>
#include<string.h>
void encrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);i++)
    {
	password[i]=password[i]-key;
    }
}

void decrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);i++)
    {
	password[i]=password[i]+key;
    }
}
void main()
{
    char password[100];
    int ch;
    clrscr();
    do
    {
    printf("\n1.Encript the string: ");
    printf("\n2.Decript the string:" );
    printf("\n3.exit.\n");
    scanf("\n%d",&ch);
    switch(ch)
    {
    case 1:
    printf("\n enter the string:");
    scanf("%s",password);
    printf("\n string is=%s",password);
    encrypt(password,7);
    printf("\n Encrypted value=%s\n",password);
    break;

    case 2:
    printf("\n enter the string:");
    scanf("%s",password);
    decrypt(password,7);
    printf("\n Decrypted value=%s\n",password);
    break;

    case 3:
    exit();
    break;
    }
    }while(ch!=3);
    getch();
}