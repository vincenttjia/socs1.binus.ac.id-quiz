#include <stdio.h>
int main()
{
	int k,kasus;
	int row;
	int column;
	int i,j;
	int count;
	char input[10][10];
	scanf("%d", &kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d %d",&row,&column);
		count = 0;
		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				scanf("%c", &input[i][j]);
			}
		}
		fflush(stdin);
		for(i=0;i<row;i++){
			for(j=0;j<column;j++)
			{
				if(input[i][j] == 46)
				{
					input[i][j] = 48;
				}
			}
		}
		for(j=0;j<column;j++){
			for(i=0;i<row;i++)
			{
				if(input[i][j] == 46)
				{
					input[i][j]= 48;
				}
			}
		}
		for(i=0;i<row;i++){
			for(j=0;j<column;j++)
			{
				if(input[i][j] == 48)
				{
					count++;
				}
			}
		}
		
		for(i=0;i<3;i++){
			for(j=0;j<4;j++){
				printf("%c",input[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		printf("Case #%d: %d\n",k, count);
	}
	return 0;
}
