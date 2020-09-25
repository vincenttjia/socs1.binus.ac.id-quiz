#include<stdio.h>

int main(){
	int t,n,type,size,discount;
	int a[5][1005];
	int inputz;
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
			inputz=int(input);
			size=inputz%4;
			a[size][type]++;
		}
		discount=0;
		for(int i=0;i<5;i++){
			for(int j=0;j<1005;j++){
				while(a[i][j]>=2){
					a[i][j]-=2;
					discount+=10;
				}
			}
		}
		printf("Case #%d: %d",tt,discount);
	}
	return 0;
}
