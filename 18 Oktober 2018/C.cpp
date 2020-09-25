#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int a,b,c,d,e,f;
		scanf("%d %d %d %d %d %d",&a,&b,&e,&c,&d,&f);
		
		double determinant = a*d - b*c;
		double x=0,y=0;
		if(determinant!=0){
			x=(e*d - b*f)/determinant;
			y=(a*f - e*c)/determinant;
		}
		
		printf("Case #%d:\n",i);
		printf("x = %.4f\n",x);
		printf("y = %.4f\n",y);
		
	}
	return 0;
}
