#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter any character:");
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
printf("Alphabet");
else
printf("not an alphabet");
getch();
}

