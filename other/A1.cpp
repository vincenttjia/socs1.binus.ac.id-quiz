#include <stdio.h>

int main()
{
	int t;
	double speed, distance, time;
	double hour, min;
	double hour2, min2;
	
	scanf("%d",&t);
	
	for (int i=1;i<=t;i++)
	{
		scanf("%lf %lf %lf:%lf",&speed, &distance, &hour, &min);
		time = distance/speed;
		
		if (time - (int)time != 0)
		{
			hour2 = hour - (int)time;
			min2 = (time - (int) time) * 60;
			min2 = 60 - (min2-min);
			hour2--;
			if (hour2<0) hour2 = hour2 + 24;
		}
		else 
		{
			hour2 = hour - (int)time;
			if (hour2<0) hour2 += 24;
			min2 = min;
		}
		
		printf("Case #%d: %02d:%02d\n",i,int(hour2),int(min2));
	}
	
	return 0;
}
