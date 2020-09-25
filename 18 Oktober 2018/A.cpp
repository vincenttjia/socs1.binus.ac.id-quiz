#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int j=1;j<=t;j++){
		int t2,a,counter=0,floor[23];
		for(int i=0;i<=22;i++){
			floor[i]=0;
		}
		scanf("%d",&t2);
		for(int i=1;i<=t2;i++){
			scanf("%d",&a);
			if(floor[a]!=1 && floor[a-1]!=1 && floor[a+1]!=1){
				counter++;
				floor[a]=1;	
			}
		}
		printf("Case #%d: %d\n",j,counter);
		
		
	}
	
	return 0;
}
