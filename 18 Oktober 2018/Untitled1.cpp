#include<stdio.h>

int fpb(int a,int b){
	if(a==0){
		return b;
	}else{
		return fpb(b%a,a);
	}
}


int main(){
	printf("%d",fpb(28,7));
	
}
