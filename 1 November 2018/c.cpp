#include<stdio.h>

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

int Max(int a,int b){
	if(a>b){
		return a;
	}
	return b;
}

int main(){
	int t,n,max,fpb;
	int input[105];
	scanf("%d",&t);
	for(int aa=1;aa<=t;aa++){
		max=-1;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&input[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				fpb=gcd(input[i],input[j]);
				max=Max(max,fpb);
			}
		}
		printf("Case #%d: %d\n",aa,max);
	}
	return 0;
}
