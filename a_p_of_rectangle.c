#include<stdio.h>
int main()
{
	float area,perimeter,length,breadth;
	printf("enter the value of length, breadth");
	scanf("%f,%f",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	printf("area of rectangle=%f\n",area,length,breadth);
	printf("perimeter of rectangle=%f\n",perimeter,length,breadth);
}
