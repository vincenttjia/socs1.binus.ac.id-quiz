#include<stdio.h>

long long pangkat(int x,int y){
	long long i,z;
	long long result=0;
	for(i=0;i<y;++i){
		result*=x;
	//	printf("%d\n",i);
	}
	return result;
}


int main(){
	int t,i;
	long long a,b,x,y,z;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%lld %lld",&a,&b);
		x=pangkat(2,a);
		y=pangkat(3,b);
		z=x*y;
		printf("%lld %lld\n",x,y);	
	}
}
