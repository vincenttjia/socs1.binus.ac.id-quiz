#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int j=1;j<=t;j++){
		int t2;
		scanf("%d",&t2);
		int odd,even,number;
		odd=0;
		even=0;
		for(int i=1;i<=t2;i++){
			scanf("%d",&number);
			if(number%2==0){
				even++;
			}else{
				odd++;
			}
			
		}
		printf("Odd group : %d integer(s).\nEven group : %d integer(s).\n",odd,even);
	}
	
	return 0;
}
