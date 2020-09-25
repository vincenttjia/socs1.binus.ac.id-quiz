#include<stdio.h>

int main(){
	int t,a,input;
	int array[100005];
	scanf("%d",&t);
	for(int x=1;x<=t;x++){
		for(int i=0;i<100005;i++){
			array[i]=0;
		}
		scanf("%d",&a);
		for(int i=1;i<=a;i++){
			scanf("%d",&input);
			array[input]++;
		}
		printf("Case #%d:\n",x);
		
		for(int i=0;i<100005;i++){
			if(array[i]!=0){
				printf("%d %d\n",i,array[i]);
			}
		}
	}
	return 0;
}
