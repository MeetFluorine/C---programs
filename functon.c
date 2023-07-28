//ADD 2 INTEGER VALUE WITH HELP OF PRE DEFINE FUNCTION.......
//number 1- No argument no terurn type
#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
   sum();
   getch();
  
}
void sum()
{
  int a,b,c;
 printf("enter 2 integer value =");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("sum=%d",c);
}


