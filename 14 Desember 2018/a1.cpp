#include<stdio.h>
#include<math.h>

int main(){
	int t,v,d,h,m,time1;
	long long v1,d1;
	double time;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d %d %d:%d",&v,&d,&h,&m);
		time=double(d)/double(v);
		time=time*60;
		time1=ceil(time);
		//printf("v1:%d d1:%d time:%lf time1:%d\n",v1,d1,time,time1);
		while(time1>=60){
			h--;
			time1-=60;
		}
		m-=time1;
		while(m<0){
			h--;
			m+=60;
		}
		while(h<0){
			h+=24;
		}
		if(h>24){
			h-=24;
		}
		printf("Case #%d: %02d:%02d\n",i,h,m);
	}
	return 0;
}
