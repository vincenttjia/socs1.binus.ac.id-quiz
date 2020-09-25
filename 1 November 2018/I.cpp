#include<stdio.h>

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 

int main(){
	int t,n,arr[100005],input,count;
	int x,y;
	scanf("%d %d",&t,&n);
	for(int i=0;i<t;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		scanf("%d",&input);
		x=binarySearch(arr,0,t-1,input);
		if(x==-1){
			printf("0\n");
		}else{
			count=1;
			y=x-1;
			while(arr[y]==input){
				count++;
				y--;
			}
			y=x+1;
			while(arr[y]==input){
				count++;
				y++;
			}
			printf("%d\n",count);
		}
		
	}
	
}
