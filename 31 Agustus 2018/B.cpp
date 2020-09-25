#include<stdio.h>

int main(){
	int a,b,x;
	scanf("%d %d",&a,&b);
	x=(a%10);
	x=x*10;
	x=x+b/10;
	printf("%d\n",x);
}
