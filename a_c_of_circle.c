#include<stdio.h>
int main()
{
	float area,circumference,radius;
    float pi=3.14;
	printf("enter the value of radius");
	scanf("%f",&radius);
	area=pi*radius*radius;
	circumference=2*pi*radius;
	printf("area of circle=%f\n",area);
	printf("circumference of circle=%f",circumference);
}
