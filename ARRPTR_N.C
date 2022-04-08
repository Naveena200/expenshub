#include<stdio.h>
int main()
{
int a,b,c;
int *ptr;
printf("enter value a: ");
scanf("%d",&a);
printf("enter value b: ");
scanf("%d",&b);
c=a+b;
*ptr=c;
printf("*ptr value is: %d\n",*ptr);
//*ptr=&b;
//printf("%d\n",*ptr);
return 0;
}
