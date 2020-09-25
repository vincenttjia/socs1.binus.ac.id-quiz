#include <stdio.h>

main (void){
	int tc,tc2;
	scanf("%d",&tc);
	for (tc2=1;tc2<=tc;tc2++){

	
int a,b,c;
int d[10000],e,f;
int pp,pp2,sum;
scanf ("%d %d",&b,&c);


for (int j=0;j<b;j++)
{
	scanf ("%d",&d[j]);
}
for (int k=0;k<c;k++)
{	int sum=0;
	scanf ("%d %d",&pp,&pp2);
	for (int k=pp-1;k<pp2;k++){
		sum = sum+d[k];
	}
	printf ("%d\n",sum);
}			
	}	

}
