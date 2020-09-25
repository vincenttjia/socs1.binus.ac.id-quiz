#include<stdio.h>

int main(){
	int first,last,middle;
	int array[100]={1,5,7,8,21,54,67,87};
	int n,search;
	scanf("%d",&search);
	n=8;
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last){
		if(array[middle]<search){
			first=middle+1;
		}else if(array[middle]>search){
			last=middle-1;
		}else if(array[middle]==search){
			printf("Found!!\n");
			break;
		}
		middle=(first+last)/2;
	}
	return 0;
}
