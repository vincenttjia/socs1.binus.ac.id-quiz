#include<stdio.h>
#define mod 1000000007

int main(){
	unsigned long long input[31][31];
	unsigned long long matrix[31][31];
	unsigned long long hasil[31][31];
	int t,n;
	
	scanf("%d",&t);
	for(int a=1;a<=t;a++){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				hasil[i][j]=0;
				matrix[i][j]=0;
				input[i][j]=0;
				scanf("%llu",&input[i][j]);
				matrix[i][j]=input[i][j];
			}
		}
		
		for(int b=1;b<n;b++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					for(int k=0;k<n;k++){
						hasil[i][j] = (hasil[i][j]+(matrix[i][k]%mod*input[k][j]%mod)%mod)%mod;
								
					}
				}
			}
			for(int i=0;i<n;i++){
					for(int j=0;j<n;j++){
						matrix[i][j]=hasil[i][j]%mod;
						hasil[i][j]=0;
					}
				}
		}
		
		printf("Case #%d:\n",a);
		for(int i=0;i<n;i++){
			printf("%llu",matrix[i][0]);
			for(int j=1;j<n;j++){
				printf(" %llu",matrix[i][j]);
			}
			printf("\n");
		}
		
	}
	
	
}
