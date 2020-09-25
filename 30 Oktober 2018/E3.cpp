#include<stdio.h>

int main(){
	long long t;
	long long n,a,b;
	long long a1,cycle;
	long long is[100005];
	long long count=0;
	scanf("%lld",&t);
	for(long long x=1;x<=t;x++){
		count=0;
		scanf("%lld %lld %lld",&n,&a,&b);
		for(int i=0;i<100005;i++) is[i]=0;
		count=0;
		a1=a;
		while(1){
			a=(a*b)%n;
			count++;
			//printf("%d",count);
			if(is[a]==0 && a!=a1){
				is[a]=count;
				//printf("*");
			}else{
				cycle=count-is[a];
				break;
			}
			
		}
		printf("Case #%lld: %lld\n",x,cycle);
			
	}
	return 0;
}
