#include<stdio.h>

void s(int n){
	if(n==1){
		printf("A");
	}else{
		s(n-1);
		printf("%c",n+64);
		s(n-1);
	}
}

int main(){
	int t,n;
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		scanf("%d",&n);
		printf("Case #%d: ",tt);
		s(n);
		printf("\n");
	}
	return 0;
}
