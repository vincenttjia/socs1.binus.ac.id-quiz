#include <stdio.h>
int main (){
long long int a,b,i,j,k,l,x,y;
1<=a<=10; 
1<=b<=100;
scanf ("%d",&a);
for (int i=1;i<=a;i++){
	scanf ("%d",&b);
	y=0;
	for (int j=1;j<=b;j++){
		x=0;
		for (int k=1;k<=j;k++){
			if (j%k==0){
				x++;
			}
		}
		if (x==2)
		y++;
	}
	printf ("Case #%d:\n",i);
	for (int l=0;l<=y;l++);{
	printf ("I will become a good boy.\n");
	}
	
}
	return 0;
}

