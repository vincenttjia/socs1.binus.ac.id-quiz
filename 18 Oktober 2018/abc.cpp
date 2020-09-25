#include<stdio.h>

int main(){
	int prime[1005];
	prime[0]=0;prime[1]=0;
	
	for(int i=2;i<=1000;i++){
		prime[i]=i;
	}
	
	for(int i=2;i<=1000;i++){
		if(prime[i]!=-1){
			for(int j=i*i;j<=1000;j+=i){
				prime[j]=-1;
			}
		}
	}
	
	
	for(int i=2;i<=1000;i++){
		if(prime[i]!=-1){
			printf("%d\n",prime[i]);
		}
	}
	return 0;
}


