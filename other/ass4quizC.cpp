#include<stdio.h>

int main(){
	
	
int rem;
int n;
int until;
	
scanf("%d",&n);
for(int z=0;z<n;z++){
	
scanf("%d",&until);

static int div[1000000];

	for(int i=0;i<until;i++){
		div[i]=i+1;
	}
	
int count[10]={0,0,0,0,0,0,0,0,0,0};

	for(int i=0;i<until;i++){
		while(div[i]>0){
			rem=div[i]%10;
			div[i]=div[i]/10;
				
			for(int i=0; i<=9; i++){
				if(rem==i){
					count[i]=count[i]+1;
				}
			}
			rem=0;
		}
	}
	printf("Case #%d: ",z+1);
	for(int j=0;j<10;j++){
		if(j==9){
			printf("%d",count[j]);
			
		}else printf("%d ",count[j]);
	}	
	printf("\n");
}	
	return 0;
}
