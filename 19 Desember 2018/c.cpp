#include<stdio.h>

int main(){
	int a[1005];
	int n,q,x,flag,j,sum;
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int t=1;t<=q;t++){
		flag=0;
		scanf("%d",&x);
		printf("Case #%d: ",t);
		for(int i=0;i<n;i++){
			sum=0;
			for(int j=i;j<n;j++){
				sum+=a[j];
				if(sum==x){
					printf("%d %d\n",i,j);
					flag=1;
					break;
				}
			}
			if(flag==1)
			break;
		}
		if(flag==0) printf("-1\n");
	}
	return 0;
}
