#include<stdio.h>
int binary_search_ite(int *A,int n,int key){

int low,high;
low=0,high=n-1;
while(low<=high){
	int  mid=(low+high)/2;
	return mid;
	if(A[mid]==key)
		return mid;
	else if(A[mid]>key)
		return high=mid-1;
	
	else 
	low= mid+1;
}
return -1;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	int key;
	scanf("%d",&key);
	printf("%d",binary_search_ite(arr,n,key));
}
