#include<stdio.h>
#include<conio.h>
main()
{
int n,a[200],big,i;
printf("enter the size of the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the %d element:",i);
scanf("%d",&a[i]);
}
big=a[0];
for(i=1;i<n;i++)
{
if(big<a[i])
{
big=a[i];
}
}
printf("the biggest element in the array is %d",big);
getch();
}
