#include<stdio.h>

int main(){
	int n,a,b,b2;
	int array[100010];
	int index;
	int flag=0;
	int index2;
	int t,i,j,k,cycle;
	scanf("%d",&t);
	for(int x=1;x<=t;x++){
		scanf("%d %d %d",&n,&a,&b);
		a=a%n;
		b=b%n;
		b2=1;
		for(i=0;i<=100000;i++){
			b2=(b2*b)%n;
			index=(a*b2)%n;
			if(array[index]!=0){
				break;
			//	printf("*%d: %d\n",i,index);
			}else{
			array[index]=i;
			//printf("%d: %d\n",i,index);
			}
		}
		cycle=i-array[index];
		printf("Case #%d: %d\n",x,cycle);
	}
}
