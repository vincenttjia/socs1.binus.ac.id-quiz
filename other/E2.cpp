#include <stdio.h>

int main()
{
	int T;
	long long N,mod,input,input2,reverse,reverse2,sum;
	reverse=0;
	reverse2=0;

	
	scanf("%d",&T);
	
	for (int i=1;i<=T;i++)
	{
		scanf("%lld",&N);
		input=N;
		
		while (input!=0)
		{
			mod=input%10;
			reverse= reverse*10+mod;
			input/=10;
		}
		
		sum = reverse+N;
		input2=sum;
		
		while (input2!=0)
		{
			mod=input2%10;
			reverse2= reverse2*10+mod;
			input2/=10;
		}
		
		printf("Case #%d:\n",i);
		printf("%lld %lld %lld %lld\n",N,reverse,sum,reverse2);
		
		reverse=0;
		reverse2=0;
	}
	
	return 0;
}
