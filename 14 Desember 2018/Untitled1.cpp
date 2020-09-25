#include<stdio.h>

int main(){
	float x=0.1;
	float y=0.2;
	double d;
	float f;
	f=x+y;
	d=double(x)+double(y);
	printf("%.18f\n",f);
	printf("%.18lf",d);
}
