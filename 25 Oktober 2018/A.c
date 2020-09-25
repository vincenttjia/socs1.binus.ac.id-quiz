#include<stdio.h>

int main(){
	int t,i,j;
	int n,m;
	int min,max,num;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d %d",&n,&m);
		max=0;
		min=1000000000;
		for(j=1;j<=n;j++){
			scanf("%d",&num);
			if(num>max){
				max=num;
			}
			if(num<min){
				min=num;
			}
		}
		if((max-min)>m){
			printf("Case #%d: NO\n",i);
		}else{
			printf("Case #%d: YES\n",i);
		}
		
	}
	
	return 0;
}
