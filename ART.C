#include<stdio.h>
#include<conio.h>

void main()
{
   int ip1,ip2,op1,op2,op3,op4,op5;
   clrscr();
   printf("Enter the value  : ");
   scanf("%d %d",&ip1,&ip2);
   //printf("Enter the value  input2 : ",input2);
   //scanf("%d",&input2);
   op1=ip1+ip2;
   printf("Sum of the add values are   : %d \n",op1);
   op2=ip1-ip2;
   printf("Sum of the sub values are   : %d \n",op2);
   op3=ip1*ip2;
   printf("Sum of the mult values are  : %d \n",op3);
   op4=ip1/ip2;
   printf("Sum of the divi values are  : %d \n",op4);
   op5=ip1%ip2;
   printf("Sum of the modul values are : %d \n",op5);
   getch();
}


