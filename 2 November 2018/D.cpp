#include<stdio.h>
int factor(int n){
	int temp=1;
	int count=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(n/i==i){
				count++;
			}else{
				count+=2;
			}
		}
	}
	return count;
	
}


int main(){
	int t,input;
	scanf("%d",&t);
	for(int a=1;a<=t;a++){
		scanf("%d",&input);
		printf("Case #%d: %d\n",a,factor(input));
	}
	return 0;
}
