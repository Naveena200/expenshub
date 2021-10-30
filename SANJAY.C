#include<stdio.h>
#include<conio.h>
void main()
{
int poori,r_poori,s_poori,j_poori,re_poori,se_poori,je_poori,b_poori;
clrscr();
printf("*****SANJAY MESS*****\n\n");
printf("Enter total no of poori  :");
scanf("%d",&poori);
printf("Enter no of poori R eats in per%:");
scanf("%d",&r_poori);
printf("Enter no of poori S eats in per%:");
scanf("%d",&s_poori);
printf("Enter no of poori J eats in per%:");
scanf("%d",&j_poori);
re_poori=poori*r_poori/100;
se_poori=poori*s_poori/100;
je_poori=poori*j_poori/100;
printf("no of r_poori :%d\n",re_poori);
printf("no of s_poori :%d\n",se_poori);
printf("no of j_poori :%d\n",je_poori);
b_poori=poori-(re_poori+se_poori);
b_poori=b_poori-je_poori;
printf("Balance total poori  : %d",b_poori);
getch();
}



