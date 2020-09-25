#include<stdio.h>

int main(){
	int flag=1;
	int t,n,a,b;
	int ab[100005];
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		flag=1;
		for(int i=0;i<100005;i++){
			ab[i]=0;
		}
		scanf("%d",&n);
		for(int j=1;j<=n;j++){
			scanf("%d %d",&a,&b);
			for(int i=a;i<=b;i++){
				if(ab[i]==1){
					flag=0;
				}else{
					ab[i]=1;
				}
			}
		}
		if(flag==1){
			printf("Case #%d: YES\n",tt);
		}else{
			printf("Case #%d: NO\n",tt);
		}
	}
	return 0;
}
