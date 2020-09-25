#include<stdio.h>

void swap(int *a,int *b){
	int swap = *a;
	*a = *b;
	*b = swap;
	
}

void sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

int main(){
	int arr[]={50,40,20,30,10};
	int n= sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",n);
	sort(arr,n);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
