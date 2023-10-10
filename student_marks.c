#include<stdio.h>
int main()
{
	double s1,s2,s3,s4,s5,percentage,aggregrate;
	printf("enter the subject marks");
	scanf("%lf,%lf,%lf,%lf,%lf",&s1,&s2,&s3,&s4,&s5);
	aggregrate=s1+s2+s3+s4+s5;
	percentage =aggregrate/500*100;
	printf("value of aggregrate=%lf\n",aggregrate);
	printf("value of percentage=%lf",percentage);}
