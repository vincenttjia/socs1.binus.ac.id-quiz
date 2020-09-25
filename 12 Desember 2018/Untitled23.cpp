#include<stdio.h>

int main(){
	int t,n,k,w;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d %d",&n,&k);
		for(int j=1;j<=n;j++){
			scanf("%d",&w);
			if(w<=k){
				printf("1");
				k-=w;
			}else{
				printf("0");
			}
		}
		printf("\n");
	}
	
	
}
