#include<stdio.h>

void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void qs(int number[],int first,int last){
	int i,j,pivot,temp;
	
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		
		while(i<j){
			while(number[i]<=number[pivot]&&i<last){
				i++;
			}
			while(number[j]>number[pivot]){
				j--;
			}
			if(i<j){
				swap(&number[i],&number[j]);
			}
		}
		swap(&number[pivot],&number[j]);
		qs(number,first,j-1);
		qs(number,j+1,last);
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
