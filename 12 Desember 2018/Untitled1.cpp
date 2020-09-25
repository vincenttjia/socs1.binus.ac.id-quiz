#include<stdio.h>

long long fac(int n){
	if(n==0){
		return 1;
	}else{
		return n*fac(n-1);
	}
}

int main(){
	long long t;
	long long input;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&input);
		printf("%d\n",fac(input));
	}
}
