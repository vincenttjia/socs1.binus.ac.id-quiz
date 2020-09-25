#include<stdio.h>
int main()
{
	
	
	int h;
    double a,b,e;
    double c,d,f;


    scanf("%d",&h);
    for (int i = 0 ; i < h ;i++){
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&e);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&f);
    double determinant = a*d - b*c;
    if(determinant != 0) {
        double x = (e*d - b*f)/determinant;
        double y = (a*f - e*c)/determinant;
    	printf("Case #%d:\n",i+1);
    	printf("x = %.4f\n",x);
    	printf("y = %.4f\n",y);
    } 
	}
    return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

