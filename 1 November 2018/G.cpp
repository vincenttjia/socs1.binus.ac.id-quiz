#include<stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int qs(int a[],int f,int l){
	int i,j,p;
	if(f<l){
		i=f;
		p=f;
		j=l;
		while(i<j){
			while(a[i]<=a[p] && i<j)
			i++;
			while(a[j]>a[p])
			j--;
			if(i<j)
			swap(&a[i],&a[j]);
		}
		swap(&a[j],&a[p]);
		qs(a,f,j-1);
		qs(a,j+1,l);
	}
}

int main(){
	int n,m,meter;
	int array[100005];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	
}
