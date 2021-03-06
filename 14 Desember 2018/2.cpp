#include<stdio.h>

void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void qs(int a[],int first,int last){
	int pivot,i,j;
	
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		
		while(i<j){
			while(a[i]<=a[pivot]&&i<last)
				i++;
			while(a[j]>a[pivot])
				j--;
			if(i<j){
				swap(&a[i],&a[j]);
			}
		}
		swap(&a[j],&a[pivot]);
		qs(a,first,j-1);
		qs(a,j+1,last);
	}	
}
	
int main(){
	int number[]={3,7,9,12,5,3};
	int len=(sizeof(number)/sizeof(number[0]))-1;
	qs(number,0,len);
	for(int i=0;i<=len;i++){
		printf("%d ",number[i]);
	}
}
