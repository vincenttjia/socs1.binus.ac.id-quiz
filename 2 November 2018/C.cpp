#include<stdio.h>

int main(){
	int t;
	double x,y,z,m,n,p;
	double j1,j2,index;
	double bi,j;
	double X,Y;
	double determinant;
	double a,b,c,d,e,f;
	scanf("%d",&t);
	for(int aa=1;aa<=t;aa++){
		scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&z,&m,&n,&p);
		a=m;
		b=-1;
		e=-(m*x-x);
		c=n;
		d=-1;
		f=-(y-n*y);
		
		//printf("%lf %lf %lf %lf %lf %lf\n",a,b,c,d,e,f);
		
		determinant = a*d - b*c;
		x=0,y=0;
		if(determinant!=0){
			X=-(e*d - b*f)/determinant;
			Y=-(a*f - e*c)/determinant;
		}
		
		//printf("X:%lf Y:%lf det:%lf\n",X,Y,determinant);
		if(p*(X+z)==Y+z){
			printf("Case #%d: YES\n",aa);
		}else{
			printf("Case #%d: NO\n",aa);
		}
		
	}
	return 0;
}
