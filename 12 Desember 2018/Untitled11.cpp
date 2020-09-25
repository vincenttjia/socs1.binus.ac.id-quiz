#include<stdio.h>

int first(int n){
	int b;
	while(n){
		b=n%10;
		n/=10;
	}
	return b;
}

int main(){
	int t,a,last,f;
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		scanf("%d",&a);
		last=a%10;
		f=first(a);
		printf("%d",f+last);
	}
	return 0;
}
