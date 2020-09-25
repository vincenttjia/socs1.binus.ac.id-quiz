#include<stdio.h>

int main(){
	int t,n,type,size,discount,apaaja;
	int a[5][1005];
	char input[5];
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		for(int i=0;i<5;i++){
			for(int j=0;j<1005;j++){
				a[i][j]=0;
			}
		}
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%s %d",&input,&type);
			if(input[0]=='S'){
				size=0;
			}else if(input[0]=='M'){
				size=1;
			}else if(input[0]=='L'){
				size=2;
			}
			a[size][type]++;
		}
//		
//		for(int i=0;i<5;i++){
//			for(int j=0;j<5;j++){
//				printf("%d ",a[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n\n");
		discount=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<1001;j++){
				while(a[i][j]>=2){
					a[i][j]-=2;
					discount+=10;
//					printf("i=%d j=%d discount=%d\n",i,j,discount);
				}
			}
		}
		printf("Case #%d: %d\n",tt,discount);
	}
	return 0;
}
