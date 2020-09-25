#include<stdio.h>
#include<math.h>
int factorial(int x){
	if(x==0){
		return 1;
	}else{
		return x*factorial(x-1);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	t--;
	t=pow(2,t);
	printf("%d",t);
	return 0;
}
