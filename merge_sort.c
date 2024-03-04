#include<stdio.h>
void print_array(int * A,int size){
	for(int i=0;i<size;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
//sub-routine-->merging process
void merge(int *A,int l,int m, int h){
	int i=l,j=m+1,k=0;
	int res[h-l-1];
	while(i<=m&&j<=h){
		if(A[i]<=A[j]){
			res[k]=A[i];
			i++;
			k++;
			
		}
		else{
			res[k]=A[j];
			j++;
			k++;
		}
	}
	while(i<=m){
		res[k]=A[i];
		i++;
		k++;
	}
		while(j<=h){
		res[k]=A[j];
		j++;
		k++;
	}
	//put the elements back in original position
	k=0;
	for(int i=l;i<=h;i++){
		A[i]=res[k];
		k++;
	}
}
void merge_sort(int *A,int l,int h){
	if(l<h){
		int m=(l+h)/2;
		merge_sort(A,l,m);
		merge_sort(A,m+1,h);
		merge(A,l,m,h);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before sorting: ");
	print_array(arr,n);
	//merge sort function call goes here
	merge_sort(arr,0,n-1);
	printf("After sorting: ");
	print_array(arr,n);
}
