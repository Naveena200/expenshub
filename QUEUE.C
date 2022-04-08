#include<stdio.h>
#include<conio.h>
#define SIZE 5
int Q[SIZE],f=0,r=-1;
Qinsert(int elem)
{
if(Qfull())
print("\n\n Overflow!!!\n\n");
else
{
++r;
Q[r]=elem;
}
}
int Qdelete()
{
int elem;
if(Qempty()){printf("\n\nUnderflow!!!\n\n");
return(-1);}
else
{
elem=Q[f];
f=f+1;
return(elem);
}
}
int Qfull()
{
if(r==SIZE-1)return 1;
return 0;
}
int Qempty()
{
if(f>r)return 1;
return 0;
}
display()
{
int i;
if(Qempty())printf("\nempty queue\n");
else
{
printf("front->");
for(i=f;i<=r;i++)
printf("%d",Q[i]);
printf("<-rear");
}
}
void main()
{
int opn,elem;
do
{
clrscr();
printf("\n###Queue operations using arrays###\n\n");
printf("\n press1-insert,2-delete,3-display,4-exit\n");
printf("\n your option ?");
scanf("%d",&opn);
switch(opn)
{
switch(opn)
{
case 1:printf("\n\nread the element to be inserted ?");
scanf("%D",&elem);
Qinsert(elem);
break;
case 2:elem=Qdelete();
if(elem!=-1)
printf("\n\ndeleted element is %d\n",elem);
break;
case 3:printf("\n\nstatus of queue\n\n");
display();
break;
case 4:printf("\n\n terminating \n\n");
break;
default:printf("\n invalid option!!! try again!!!\n);
break;
}
printf("\n\n\n\n press a key to continue....");
getch();
}while(opn!=4);
getch();
}