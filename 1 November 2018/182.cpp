#include<stdio.h>
#include<stdlib.h>

int main(){
	int a=10;
	
	int *p=&a;
	p=(int*) malloc(sizeof(int));
	*p=4;
	printf("%d %d",*p,a);
	
	
}
