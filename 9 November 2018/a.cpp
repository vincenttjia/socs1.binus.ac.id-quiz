#include<stdio.h>

int main(){
	int t;
	int d;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&d);
		printf("Case #%d:\n",i);
		printf("%d SECONDS TILL NEW YEAR!!\n",d);
		for(int j=d-1;j>0;j--){
			if(j==5 || j==10 || j==30||j==60){
				printf("%d SECONDS TILL NEW YEAR!!\n",j);
			}else{
				printf("%d\n",j);
			}
		}
	}
}
