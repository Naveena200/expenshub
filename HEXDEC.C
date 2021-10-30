 #include<stdio.h>
 #include<conio.h>
 void main()
 {
    int val1,val2;
    scanf("%x",&val1);
    printf("%d\n",val1);
    //%x hexadecimal changed to %d integer
    getch();
    scanf("%d",&val2);
    printf("%x\n",val2);
    //%d integer changed to %x hexadecimal
    getch();
 }