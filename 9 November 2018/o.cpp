#include<stdio.h>

int main(){
	int t,n,array[1005],max,left,right;
	scanf("%d",&t);
	for(int a=1;a<=t;a++){
		scanf("%d",&n);
		max=0,left=0,right=0;
		for(int b=0;b<n;b++){
			scanf("%d",&array[b]);
			if(array[b]>array[max]){
				max=b;
			}
		}
//		printf("max:%d\n",max);
		for(int b=1;b<max;b++){
			if(array[b]>array[b-1] && array[b]>array[b+1]){
				left+=array[b];
		//		printf("left:%d\n",b);
			}
		}
		for(int b=max+1;b<n-1;b++){
			if(array[b]>array[b-1] && array[b]>array[b+1]){
				right+=array[b];
		//		printf("right:%d\n",b);
			}			
		}
	//	printf("tleft:%d tright:%d\n",left,right);
		if(left<right){
			printf("Case #%d: left\n",a);
		}else if(right<left){
			printf("Case #%d: right\n",a);
		}else if(right==left){
			printf("Case #%d: same\n",a);
		}
	}
	return 0;
}
