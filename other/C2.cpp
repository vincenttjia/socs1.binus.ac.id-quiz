#include <stdio.h>

int main()
{
	int T,N,leap;
	leap=0;
	
	scanf("%d",&T);
	
	for (int i=1;i<=T;i++)
	{
		scanf("%d",&N);
		
		for (int j=1;j<=N;j++)
		{
			if ((j%4==0 && j%100!=0) || (j%4==0 && j%400==0))
			{
				leap++;
			}
		}
		
		printf("Case #%d: %d\n",i,leap);
		leap=0;
	}
	
	return 0;
}
