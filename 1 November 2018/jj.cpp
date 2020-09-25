#include<stdio.h>
#include<stdlib.h>
int flag=0;

long long binarySearch(long long arr[], long long l, long long r, long long x) 
{ 
	long long mid = l + (r - l) / 2; ;
    if (r >= l) {
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x)
        return mid+1;
            
  
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
    return l;
} 

void merge(long long arr[], long long l, long long m, long long r) 
{ 
    long long i, j, k; 
    long long n1 = m - l + 1; 
    long long n2 =  r - m; 
  
    /* create temp arrays */
    long long L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(long long arr[], long long l, long long r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        long long m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 


int main(){
	long long n,m,arr[100005],y,a,b;
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	mergeSort(arr,0,n-1);
	for(int i=0;i<m;i++){
		flag=0;
		scanf("%lld",&y);
		a=binarySearch(arr,0,n-1,y);
		if(a<0){
			a=0;	
		}
		printf("%lld\n",a);
	}
}
