#include <stdio.h>

int checkJo(int num)
{
	int count = 0,num2 = num;
	while (num2>0)
	{
		num2/=10;
		count++;
	}

	if (num == 7 || num == 8) return 1;
	
	int mod = 0, count2 = 0;
	while (num>0)
	{
		mod = num%10;
		num/= 10;
		if (num == 7 || num == 8) count2++;
	}
	if (count2 == count) return 1;
}

int semiJo(int num)
{
	for (int i=1;i<1000000;i++)
	{
		if (checkJo(i) == 1) 
		{
			if (num%i == 0)
			{
				return 1;
			}
		}
	}
}

int main()
{
	int t,n;
	
	scanf("%d",&t);
	
	for (int i=1;i<=t;i++)
	{
		scanf("%d",&n);
		
		if (semiJo(n) == 1) printf("Case #%d: YES\n",i);
		else printf("Case #%d: NO\n",i);
	}
	
	return 0;
}
