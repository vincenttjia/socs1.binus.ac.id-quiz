#include<stdio.h>


int main(){
	int arr[100000];
	int t,a,b,temp;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<t-1;i++){
		for(int j=0;j<t-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<t;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
