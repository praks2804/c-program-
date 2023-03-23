#include <stdio.h>
void main()
{
    float base,height;
    printf("Enter Base and Height: ");
    scanf("%f %f",&base,&height);
    float area = (base * height) / 2;
    printf("Area of Triangle is",area);
}
