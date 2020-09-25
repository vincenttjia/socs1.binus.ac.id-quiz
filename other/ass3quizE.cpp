#include<stdio.h>

int main(){
	int question;
	int result =0 ;
	int larray;
	int quests;
	int from;
	int end;
	int n;
	
scanf("%d",&n);
for(int i=1;i<=n;i++){
	scanf("%d %d",&larray,&quests);
	
		int numarr[larray];

		
		for(int j=0;j<larray;j++){
			scanf("%d",&numarr[j]);
		}
		
		for(int x=1;x<=quests;x++){
		scanf("%d %d",&from,&end);
		result=0;
			for(int q=from-1;q<end;q++){
				result=result+numarr[q];
				
				
				}
			printf("%d\n",result);
			
		}
	
	}
	

	
	return 0;
}
