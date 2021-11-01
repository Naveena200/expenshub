#include<stdio.h>
#include<conio.h>
int ragul=1;
void main()
{
  while(ragul)
  {
   clrscr();
    printf("Ragul status");
    scanf("%d",&ragul);
    //condition checking
    if(ragul==0)
     {
       printf("Ragul is sitting\n");
       ragul=1;
       getch();
       continue;
     }
    else if(ragul==1)
     {
       printf("Ragul is standing\n");
     }
    else
     {
       printf("Ragul is invalid input");
     }
   }
}