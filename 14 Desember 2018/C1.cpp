#include <stdio.h>

int main()
{
	int arr[100000];
	char temp;
	int count = 0;
	int max = 0;
	int min = 2147483646;
	float mean;
	int sum;
	
	FILE *fp = fopen("testdata.in","r");
	
	while(!feof(fp))
	{
		fscanf(fp,"%d ",&arr[count]);
		count++;
	}	
	
	fclose(fp);

//	for (int i=0;temp!='\n';i++)
//	{
//		scanf("%d%c",&arr[i],&temp);
//		count++;
//	}
	
	sum = arr[0];
	for (int i=0;i<count;i++)
	{
		if (arr[i]>max) max = arr[i];
		if (arr[i]<min) min = arr[i];
	}
	
	for (int i=1;i<count;i++)
	{
		sum += arr[i];
	}
	
	mean = (float)sum / (float)count;
	
	printf("Count : %d\n",count);
	printf("Sum   : %d\n",sum);
	printf("Mean  : %.2f\n",mean);
	printf("Min   : %d\n",min);
	printf("Max   : %d\n",max);
	printf("Range : %d\n",max-min);
	
	return 0;
}
