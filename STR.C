#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20],name1[20],x;
clrscr();
printf("Enter your name:\n");
scanf("%s",name);
printf("Enter other name:\n");
scanf("%s",name1);
/*printf("string concatenation:%s\n",strcat(name,name1));
printf("string uppercase:%s\n",strupr(name));
printf("string lowercase:%s\n",strlwr(name));
printf("string reverse:%s\n",strrev(name));
printf("string length:%s\n",strlen(name));*/
//printf("string copy:%s\n",strcpy(name,name1));
x=strcmp(name,name1);
printf("the value of x:%d",x);
if(x==0)
{
printf("they are similar");
}
else
printf("they are not similar");
getch();
}