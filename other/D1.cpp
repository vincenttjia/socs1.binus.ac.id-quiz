#include <stdio.h>

int main()
{
	float x,y,z;
	
	for (int i=1;i<=3;i++)
	{
		scanf("%f",&z);
		
		x=z/999;
		
		if (int(z)%111==0)
		{	
			x*=100;
			y=int(x)%10;
			x-=y;
			x/=100;
			printf("%.1f...\n",x);	
		}
		else
		{
			x*=10000;
			y=int(x)%10;
			x-=y;
			x/=10000;
			printf("%.3f...\n",x);
		}
	}
	
	return 0;
}
