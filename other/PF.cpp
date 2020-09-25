#include <stdio.h>
int main()
{
	int a,b,c,d,L,B;
	int ctr1,ctr2,ctr3;
	char p;
	
		scanf("%d",&a);
		for(b=0;b<a;b++){
			scanf("%d",&d);
			for(c=0;c<=d;c++){
				scanf("%c",&p);
				if(p=='L'){
					ctr1 = ctr1 + 1;
				}
				if(p=='B'){
					ctr2 = ctr2 + 1;
				}
				if(p=='T'){
					ctr3 = ctr3 + 1;
				}
			}if(ctr1>ctr2){
				printf("Lili\n");
			}else if(ctr1<ctr2){
				printf("Bibi\n");
			}else if(ctr1=ctr2){
				printf("None\n");
			}else if(ctr3=p){
				printf("None\n");
			}
	}
}

	
	

