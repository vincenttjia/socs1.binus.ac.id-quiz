#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n,q;
		scanf("%d %d",&n,&q);
		int a[n+5];
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=1;i<=q;i++){
			int sum=0,l,r;
			scanf("%d %d",&l,&r);
			for(int j=l;j<=r;j++){
				sum+=a[j];
			}
			printf("%d\n",sum);
		}
		
		
		
	}
}
