#include<stdio.h>

int fibonacci(int FI)
{
	int mod = 1000000009;
	if(FI<=1){
		return FI;
	}
	
	return fibonacci((FI-1)%mod)+fibonacci((FI-2)%mod);
}

int main()
{
	int Test,A;
	int sum;
	int FI;
	int mod = 1000000009;
	scanf("%d",&Test);
	for(A=1;A<=Test;A++)
	{
		sum=0;
		scanf("%d",&FI);
		fibonacci(2) == 0;
		fibonacci(1) == 0;
		printf("Case #%d: ",A);
		for(int i=0;i<=FI;i++){
			sum = sum+(fibonacci(i)%mod)%mod;
		}
		printf("%d\n",sum);
	}
	return 0;
}
