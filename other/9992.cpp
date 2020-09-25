#include<stdio.h>
#include <math.h>
int main(){	 
float a,b,c,d,e,f,g,h,i;
float j,k,l;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);


if (int(a)%111==0){
	d=a/999;
	g=floor(10*d);
	j=g/10;
	printf ("%.1f...\n",j);	
}else {
	d=a/999;
	g=floor(1000*d);
	j=g/1000;
	printf ("%.3f...\n",j);
}


if (int(b)%111==0){
	e=b/999;
	h=floor(10*e);
	k=h/10;
	printf ("%.1f...\n",k);	
}else {
	e=b/999;
	h=floor(1000*e);
	k=h/1000;
	printf ("%.3f...\n",k);
}

if (int(c)%111==0){
	f=c/999;
	i=floor(10*f);
	l=i/10;
	printf ("%.1f...\n",l);	
}else {
	f=c/999;
	i=floor(1000*f);
	l=i/1000;
	printf ("%.3f...\n",l);
}


return 0;
}
