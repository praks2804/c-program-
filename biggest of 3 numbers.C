#include<stdio.h>
void main()
{
 int a,b,c;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 if(a>b & a>c)
  printf("A is bigger");
 else if(b>a & b>c)
  printf("B is bigger");
 else
  printf("C is bigger");
}
