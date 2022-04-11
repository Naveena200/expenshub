#include<stdio.h>
#include<conio.h>
void main()
{
int c;
clrscr();
scanf("%d",&c);
printf("%c\n",c);
if((c>=65 && c<=95)||(c>=97 && c<=122))
printf("It is ALPHABET");
else
printf("It is not an ALPHABET");
getch();
}