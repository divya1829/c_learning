#include<stdio.h>
#include<stdlib.h>
int linear_search(int *A,int size,int k){
	int i;
	for(i=0;i<size;i++){
		if(k==A[i]){
			return i;
		}
	}
		return -1;
} 
int main(){
	int n,arr[n],key;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	int linear_search(a,n,key);
	printf("%d",linear_search(arr,n,key));
	
}


