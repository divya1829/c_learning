#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int temp,r,sum=0;
	temp=n;
	while(n!=0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==temp)
	printf("armstrong");
	else
	printf("not an armstrong");
}
