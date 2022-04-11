#include<stdio.h>
#include<malloc.h>
void insert();
void del();
void display();
      struct node
      {
	  int priority;
	  int info;
	  struct node*next;
      }*start=null,*q,*temp,*new;
      typedef struct node n;
      int main()
      {
	 int ch;
	 clrscr();
	 do
	 {
	 printf("\n[1]insertion\t[2]deletion\t[3]display[4]exit\t:");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	   case 1:insert();break;
	   case 2:del();
		 break;
	   case 3:insert();
		 break;
	   case 4:display();
		 break;
	 }
	 }
	 while(ch<4);
       }
       void insert()
       {
