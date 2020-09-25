#include<stdio.h>

long long binarySearch(long long arr[], long long l, long long r, long long x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 

int main(){
	long long n,m,arr[100005],x,count,input,y;
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	
	for(int i=0;i<m;i++){
		count=1;
		scanf("%lld",&input);
		x=binarySearch(arr,0,n-1,input);
		if(x==-1){
			printf("0\n");
			continue;
		}
		y=x-1;
		while(arr[y]==input && y>0){
			y--;
			count++;
		}
		y=x+1;
		while(arr[y]==input && y>0){
			y++;
			count++;
		}
		printf("%lld\n",count);
	}
	
	
}
