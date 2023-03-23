Swapping 


#include<stdio.h>
#include<conio.h>
void main()
{
  int a=10,b=20;
  clrscr();
  printf("before swapping a=%d b=%d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n after swapping a=%d b=%d",a,b);
}
