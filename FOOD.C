#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=50,vada=100,tea=100;
   int a_idly,a_dosa,a_vada,a_tea;
   int b_idly,b_dosa,b_vada,b_tea;
   clrscr();
   printf("*****ALAGU EATS*****\n");
   if(a_idly>idly)
    {
     printf("Balance=0\n");
    }
   else
   {
     b_idly=idly-a_idly;
     printf("Balance idly= %d\n",b_idly);
   }
   if(a_dosa>dosa)
    {
     printf("Balance=0\n");
    }
   else
   {
     b_dosa=idly-a_dosa;
     printf("Balance dosa= %d\n",b_dosa);
   }
   if(a_vada>vada)
    {
     printf("Balance=0\n");
    }
   else
   {
     b_vada=vada-a_vada;
     printf("Balance vada= %d\n",b_vada);
   }
   if(a_tea>tea)
    {
     printf("Balance=0\n");
    }
   else
   {
     b_tea=tea-a_tea;
     printf("Balance tea= %d\n",b_tea);
   }
   getch();

}