#include<stdio.h>
#include<conio.h>
int main()
{
int r,co,a[4][4],b[4][4],c[4][4],i,j;
printf("enter the number of row A and B matrices:");
scanf("%d",&r);
printf("enter the number of column A and B matrices:");
scanf("%d",&co);
printf("enter the element of A matrix:");
for(i=0;i<r;i++)
{
for(j=0;j<co;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the element of B matrix:");
for(i=0;i<r;i++)
{
for(j=0;j<co;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<co;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("the resultant matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<co;j++)
{
printf("%2d\t",c[i][j]);
}
printf("\n\n");
}
getch();
}
