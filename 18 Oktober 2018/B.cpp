#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int x=1;x<=t;x++){
		int m;
		scanf("%d",&m);
		int a[m+5][m+5];
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		int maxr[m+5];
		int maxc[m+5];
		
		for(int i=0;i<m+1;i++){
			maxr[i]=-127;
			maxc[i]=-127;	
		}
		
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				if(maxr[i]<a[i][j]){
					maxr[i]=a[i][j];
				}
			}
		}
		
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				if(maxc[i]<a[j][i]){
					maxc[i]=a[j][i];
				}
			}
		}
		
		
		
		printf("Case #%d:\n",x);
		printf("Row :");
		for(int i=0;i<m;i++){
			printf(" %d",maxr[i]);
		}
		printf("\n");
		printf("Col :");
		for(int i=0;i<m;i++){
			printf(" %d",maxc[i]);
		}
		printf("\n");
		
		
		
	}
	return 0;
}
