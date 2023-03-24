#include<stdio.h>
int main()
{
int n , r=0,re=0;
printf("enter the integer:");
scanf("%d",&n);
while(n!=0)
{
re=n%10;
r=r*10+re;
n/=10;
}
printf("the reverse numbers %d",r);
return 0;
}
