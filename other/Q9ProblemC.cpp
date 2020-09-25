#include <stdio.h>

int GCD(int a, int b)
{
	if(b==0) return a;
	return GCD(b,a%b);
}

int main()
{
	int batas, banyak;
	int angka[1000];
	int gcd[100000];
	int index, max;
	
	scanf("%d", &batas);
	for (int a=1;a<=batas;a++)
	{
		index = 0;
		max = 0;
		scanf("%d", &banyak);
		for (int b=0;b<banyak;b++)
		{
			scanf("%d", &angka[b]);
		}
		for (int b=0;b<banyak;b++)
		{
			for (int c=b+1;c<banyak;c++)
			{
				gcd[index] = GCD(angka[b], angka[c]);
				if (max<gcd[index])
				{
					max = gcd[index];
				}
				index++;
			}
		}
		printf("Case #%d: %d\n", a, max);
	}
	return 0;
}
