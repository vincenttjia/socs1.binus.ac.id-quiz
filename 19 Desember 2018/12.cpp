#include<stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void qs(int a[],int f,int l){
	int p,i,j;
	if(f<l){
		i=f;
		p=f;
		j=l;
		while(i<j){
			while(a[i]<=a[p]&&i<l)
			i++;
			while(a[j]>a[p])
			j--;
			if(i<j)
			swap(&a[i],&a[j]);
		}
		swap(&a[p],&a[j]);
		qs(a,f,j-1);
		qs(a,j+1,l);
	}
}

int main(){
	int a[]={124,4,2,352,234,565,5,4,654,645,657,57,5,7};
	int len=(sizeof(a)/sizeof(a[0]))-1;
	qs(a,0,len);
	for(int i=0;i<=len;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
