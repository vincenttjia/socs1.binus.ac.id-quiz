#include<stdio.h>

int main(){
	int array[100010];
	int index;
	int flag=0;
	int index2;
	int t,i,j,k,cycle;
	int n,a,b,b2;
	scanf("%d",&t);
	for(int x=1;x<=t;x++){
		scanf("%d %d %d",&n,&a,&b);
		a=a%n;
		b=b%n;
		b2=1;
		for(i=0;i<=100000;i++){
			b2=(b2*b)%n;
			array[i]=(a*b2)%n;
			//printf("%d: %d\n",i,array[i]);
		}
		
		index=100;
		cycle=0;
		flag=0;
		for(i=10000;i<=100000;i++){
			for(int j=i-1;j>=1000;j--){
				if(array[i]==array[j]){
					flag=1;
					//printf("%d %d",i,j);
					cycle=i-j;
					break;	
				}
			}
			if(flag==1) break;
		}
		
			
		printf("Case #%d: %d\n",x,cycle);
		
		
		
		
		
	}
	
	
	
	
}
