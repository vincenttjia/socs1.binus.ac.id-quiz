#include <stdio.h>
int main(){
	long long testcase,x,n,m;
	long long sum;
	scanf("%lld",&testcase);
	for(int i=0;i<testcase;i++){
		sum=0;
		scanf("%lld %lld %lld",&n,&x,&m);
			for(int j=0;j<=n;j++){
				if(sum<=x){
					sum+=j;
				}
				if(sum>x){
					printf("%lld\n",sum);
					while(sum>x){
						sum-=m;
					}
				}
			}
	}
	
	return 0;
}
