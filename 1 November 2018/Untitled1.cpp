#include<stdio.h>

int main(){
	int t,a,b,c,d,flag;
	scanf("%d",&t);
	for(int aa=1;aa<=t;aa++){
		flag=0;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(d<c){
			printf("Case #%d: NO\n",aa);
			continue;
		}
		b=b%d;
		for(int i=1;i<=10000;i++){
			if(((a*i)+b)%d==c){
				printf("Case #%d: YES\n",aa);
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("Case #%d: NO\n",aa);
		}
	}
	return 0;
}
