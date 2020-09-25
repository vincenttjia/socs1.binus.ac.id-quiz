#include<stdio.h>
#include<math.h>

int main(){
	for(int j=1;j<=3;j++){
		float a,x;
		scanf("%f",&a);
		x=a/999;
		
		if(int(a)%111==0){
			x=x*10;
			x=floor(x);
			x=x/10;
			printf("%.1f...\n",x);	
		}else{
			x=x*1000;
			x=floor(x);
			x=x/1000;
			printf("%.3f...\n",x);
		}
	}
	
}
