#include<stdio.h>

int main(){
	for(int j=1;j<=3;j++){
		float a,x,t;
		scanf("%f",&a);
		x=a/999;
		
		if(int(a)%111==0){
			x=x*100;
			t=int(x)%10;
			x=x-t;
			x=x/100;
			printf("%.1f...\n",x);	
		}else{
			x=x*10000;
			t=int(x)%10;
			x=x-t;
			x=x/10000;
			printf("%.3f...\n",x);
		}
	}
	
}
