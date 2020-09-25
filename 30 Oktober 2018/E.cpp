#include<stdio.h>

int main(){
	int t;
	int n,a,b;
	int b2;
	int counter;
	int jawab,tjawab;
	bool is[100005];
	scanf("%d",&t);
	for(int c=1;c<=t;c++){
		for(int i=0;i<=100005;i++){
			is[i]=0;
		}
		counter=0;
		scanf("%d %d %d",&n,&a,&b);
		b2=1;
		is[a%n]=1;
		is[a]=1;
		while(1){
			b2=(b2%n*b%n)%n;
			jawab=(a%n*b2%n)%n;
			counter++;
			//printf("%d. jawab:%d b2:%d is:%d\n",counter,jawab,b2,is[jawab]);
			if(is[jawab]==1){
				if(tjawab==jawab){
					counter=1;
				}
				break;
			}else{
				is[jawab]=1;
			}
		}
		printf("Case #%d: %d\n",c,counter);
	}
	return 0;
}
