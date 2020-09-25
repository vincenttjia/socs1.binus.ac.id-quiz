#include<stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void qs(int a[],int first,int last){
	int i,j,pivot;
	
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		
		while(i<j){
			while(a[i]<=a[pivot]&&i<last)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			swap(&a[i],&a[j]);
		}
		swap(&a[pivot],&a[j]);
		qs(a,first,j-1);
		qs(a,j+1,last);
	}	
}

int main(){
	int a[]={2,14,4,2,3,2,2,3,4,4,55,6,56,3,4,5,54,3};
	int len=sizeof(a)/sizeof(a[0]);
	len--;
	qs(a,0,len);
	for(int i=0;i<=len;i++){
		printf("i:%d\n",a[i]);
	}
	
}
