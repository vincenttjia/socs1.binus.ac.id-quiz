#include<stdio.h>

int array[10005];

void pf(int n){
	while(n%2==0){
		array[2]++;
		n/=2;
	}
	
	for(int i=3;i*i<=n;i+=2){
		while(n%i==0){
			array[i]++;
			n=n/i;
		}
	}
	
	if(n>2){
		array[n]++;
	}
}


int main(){
	int t,x;
	scanf("%d",&t);
	for(int a=1;a<=t;a++){
		for(int i=0;i<10005;i++){
		array[i]=0;
		}
		scanf("%d",&x);
		for(int i=x;i>0;i--){
			pf(i);
		}
		printf("Case #%d:\n",a);
		for(int i=0;i<=x;i++){
			if(array[i]!=0){
				printf("%d %d\n",i,array[i]);
			}
		}
	}
	return 0;
}
