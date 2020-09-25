#include<stdio.h>

int index=0;


struct abc{
	double score;
}data[10005];

int main(){
	FILE *fp;
	fp=fopen("testdata.in","r");
	while(!feof(fp)){
		fscanf(fp,"%lf ",&data[index].score);
		index++;
	}
	double sum,min,max,range;
	double mean;
	sum=0;
	min=2147483647;
	max=-2147483647;
	for(int i=0;i<index;i++){
		sum+=data[i].score;
	}
	mean=sum/index;
	for(int i=0;i<index;i++){
		if(min>data[i].score){
			min=data[i].score;
		}
	}
	for(int i=0;i<index;i++){
		if(max<data[i].score){
			max=data[i].score;
		}
	}
	range=max-min;
	printf("Count : %d\n",index);
	printf("Sum   : %.0lf\n",sum);
	printf("Mean  : %.2lf\n",mean);
	printf("Min   : %.0lf\n",min);
	printf("Max   : %.0lf\n",max);
	printf("Range : %.0lf\n",range);
	return 0;
}
