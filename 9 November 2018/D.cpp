#include<stdio.h>

int main(){
	long long t,n,m,x,sum;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		sum=0;
		scanf("%lld%lld%lld",&n,&m,&x);
		printf("Case #%lld:\n",i);
		for(int j=1;j<=n;j++){
			sum+=j;
			if(sum>m){
				printf("%lld\n",sum);
				while(sum>m){
					sum-=x;
				}
			}
		}
	}
	return 0;
}
