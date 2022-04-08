
#include<stdio.h>
int count;
void main()
{
count=5;
}
#include<stdio.h>
extern int count;
void main()
{
printf("count is:%d",count);
getch();
}
