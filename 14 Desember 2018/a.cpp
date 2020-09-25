#include<stdio.h>

int main(){
	int t;
	double h,m,v,d,time;
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		scanf("%lf %lf %lf:%lf",&v,&d,&h,&m);
		
		
		
		
		printf("Case #%d: %02d:%02d\n",int(tt),int(h),int(m));
	}
	return 0;
}
