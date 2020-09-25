#include<stdio.h>


int main(){
	int count,t,n,arr[100005];
	scanf("%d",&t);
	for(int aa=1;aa<=t;aa++){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		printf("Case #%d:",aa);
		for(int i=0;i<n;i++){
			count=0;
			for(int j=0;j<n;j++){
				if(arr[i]<arr[j])
				count++;
			}
			printf(" %d",count+1);
		}
		printf("\n");
	}
	return 0;
}
