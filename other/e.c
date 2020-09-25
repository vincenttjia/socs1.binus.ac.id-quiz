#include <stdio.h>

int main()
{
	long long int startasli,x,start,mul,mod;
	long long int hasil[100001];
	long long int jum;
	long long int count=0;

	scanf("%d",&x);

	for (int i=1;i<=x;i++)
	{
		for(int j=1;j<100001;j++)
		{
			hasil[i]=0;
		}
		count=0;
		jum=0;
		start=0;
		
		
		scanf("%lld %lld %lld",&mod,&start,&mul);
		startasli=start;
		
		while (1)
		{
			count++;
			start=(start*mul)%mod;
			if(hasil[start]==0 && start!=startasli)
			{
				hasil[start]=count;
			}else
			{
				jum=count-hasil[start];
				break;
			}
			
		}
		printf("Case #%d: %lld\n",i,jum);

	}

	return 0;
}
