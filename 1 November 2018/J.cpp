#include<stdio.h>

long long binarySearch(long long arr[], long long l, long long r, long long x) 
{ 
	long long mid=(l+r)/2;
	while(l<=r){
		if(arr[mid]==x){
			return mid+1;
			break;
		}
		else if(arr[mid]<x && arr[mid+1]>x){
			return mid+1;
			break;
		}
		else if(arr[mid]<x){
			l=mid+1;
		}else if(arr[mid]>x){
			r=mid-1;
		}
		mid=(l+r)/2;
	}
	return mid;
} 

void merge(long long number[],long long i1,long long j1, long long i2, long long j2)
{
	long long tampung[100000];
	long long i = i1,j = i2, k = 0 ;
	while(i <= j1 && j <= j2)
	{
		if(number[i] < number[j])
		{
			tampung[k++] = number[i++];
		}
		else
		{
			tampung[k++]= number[j++];
		}
	}
	while(i<=j1)
	{
		tampung[k++]=number[i++];
	}
	while(j<=j2)
	{
		tampung[k++]=number[j++];
	}
	for(i=i1,j=0;i<=j2;i++,j++)
	{
		number[i]= tampung[j];
	}
}

void mergesort(long long number[],long long i ,long long j)
{
	long long mid = 0;
	if(i<j)
	{
		mid = (i+j)/2;
		mergesort(number,i,mid);
		mergesort(number,mid+1,j);
		merge(number,i,mid,mid+1,j);
	}
}


int main(){
	long long n,m,arr[100005],y,a,b;
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<m;i++){
		scanf("%lld",&y);
		if(y<arr[0]){
			a=0;
		}else if(y>arr[n-1]){
			a=n;
		}
		else{
			a=binarySearch(arr,0,n-1,y);
		}
		printf("%lld\n",a);
	}
}
