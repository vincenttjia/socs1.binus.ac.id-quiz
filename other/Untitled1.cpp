#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("Case #%d:\n",i);
		for(int j=1;j<=a;j++){
			printf("#");
		}
		printf("\n");
		for(int j=1;j<=b-2;j++){
			printf("#");
		for(int k=1;k<=a-2;k++){
			printf(" ");
		}
		printf("#\n");
		}
		for(int j=1;j<=a;j++){
			printf("#");
		}
		printf("\n");

		
	}
	
}
