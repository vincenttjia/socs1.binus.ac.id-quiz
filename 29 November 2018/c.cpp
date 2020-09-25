#include<stdio.h>
#include<math.h>

long long Jo[1028];

long long strlen(long long x){
	int count=0;
	while(x){
		count++;
		x/=10;
	}
	return count;
}

long long num2bin(long long x){
	int bin[1028];
	for(int i=0;i<1028;i++){
		bin[i]=0;
	}
	int index=0;
	long long temp=0;
	while(x){
		bin[index]=x%2;
		x=x/2;
		index++;
	}
	for(index;index>=0;index--){
		temp*=10;
		temp+=bin[index];
	}
	return temp;
}

void gen(){
	long long x,y,len;
	for(int i=0;i<=1023;i++){
		x=num2bin(i);
		y=x;
		len = strlen(x);
		for(int j=len-1;j>=0;j--){
			x=x+(7*pow(10,j));
		}
		Jo[i]=x;
	}
	Jo[0]=7;
}

int check(int x){
	for(int i=0;i<1023;i++){
		if(x%Jo[i]==0){
			return 1;
		}
	}
	return 0;
}

int main(){
	int t,x,f;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		f=0;
		gen();
		scanf("%d",&x);
		f=check(x);
		if(f==1){
			printf("Case #%d: YES\n",i);
		}else{
			printf("Case #%d: NO\n",i);
		}
	}
	
}
