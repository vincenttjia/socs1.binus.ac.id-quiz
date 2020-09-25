#include<stdio.h>
#define mod 1000000009

int array[10000010];


int fibo(int n){
	if(array[n]!=-1){
		return array[n];
	}
	array[n]=((fibo(n-1)%mod)+(fibo(n-2)%mod));
	return array[n];
}

int main(){
	int t,n,sum;
	scanf("%d",&t);
	for(int i=0;i<10000010;i++){
		array[i]=-1;
	}
	array[1]=1;
	array[2]=1;
	for(int aa=1;aa<=t;aa++){
		sum=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			sum=(sum+(fibo(i))%mod)%mod;
		}
		printf("Case #%d: %d\n",aa,sum);
	}
}

