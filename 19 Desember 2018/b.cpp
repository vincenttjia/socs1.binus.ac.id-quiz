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
			while(a[i]<=a[pivot])
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
	int t,n,m,index;
	int a[205];
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		qs(a,0,n-1);
		printf("Case #%d:\n",tt);
		for(int i=0;i<m;i++){
			index=i;
			printf("%d",a[index]);
			index+=m;
			while(index<n){
				printf(" %d",a[index]);
				index+=m;
			}
			printf("\n");
		}
	}
	return 0;
}
