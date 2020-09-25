#include <stdio.h>
#include <math.h>
int main (){
	int testcase;
	int v,d,xx,yy;
	int a,b;
	double temp;
	double temp2;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d %d %d:%d",&v,&d,&xx,&yy);
		temp=double(d)/double(v);
		temp=temp*60;
		temp=ceil(temp);
		while(temp>=60){
			xx--;
			temp-=60;
		}
		yy=yy-temp;
		if(yy<0){
			xx--;
			yy+=60;
		}
		if(xx<0){
			xx=xx+24;
		}
		if(xx>=24){
			xx-=24;
		}
		
		
		printf("Case #%d: %d:%d",i+1,int(xx),int(yy));
	}
	
	return 0;
}
