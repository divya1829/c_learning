#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int rev,rem,original;
	original=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(original==rev)
	printf("palindrom");
	else
	printf("not a palindrome");
}
