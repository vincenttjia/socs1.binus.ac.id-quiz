#include<stdio.h>

int main(){
	long long t,a,x,b,d,c,flag,y,z;
	scanf("%d",&t);
	for(int aa=1;aa<=t;aa++){
		flag=0;
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		for(x=1;x<d;x++){
			if(((a*x+b)%d)==c){
				flag=1;
				break;
			}
		}
		if(flag==1){
			printf("Case #%d: YES\n",aa);
		}else{
			printf("Case #%d: NO\n",aa);
		}
		
		
	}
	
	
	
}
