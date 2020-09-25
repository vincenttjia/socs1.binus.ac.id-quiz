#include<stdio.h>

void swap(int *a,int *b){
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
		swap(&a[pivot],&a[j]);
		qs(a,first,j-1);
		qs(a,j+1,last);
	}
}

int main(){
	int t;
	int n,m,x;
	int a[250];
	scanf("%d",&t);
	for(int z=1;z<=t;z++){
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		qs(a,0,n-1);
		printf("Case #%d:\n",z);
		for(int i=0;i<m;i++){
			x=i;
			printf("%d",a[x]);
			x+=m;
			while(x<n){
				printf(" %d",a[x]);
				x+=m;
			}
			printf("\n");
		}
	}
	return 0;
}
