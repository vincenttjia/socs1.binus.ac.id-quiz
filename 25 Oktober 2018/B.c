#include<stdio.h>
#define mod 1000000007

void multiply(long long mat1[][35],  
              long long mat2[][35],  
              long long res[][35]) 
{ 
    int i, j, k; 
    for (i = 0; i < 35; i++) 
    { 
        for (j = 0; j < 35; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < 35; k++) 
                res[i][j] += ((mat1[i][k]%mod) *  
                             (mat2[k][j]%mod))%mod; 
        } 
    } 
} 

int main(){
	long long t,i,j,k,l;
	long long matrix1[35][35];
	long long matrix2[35][35];
	long long matrix3[35][35];
	long long n;
	scanf("%lld",&t);
	for(i=1;i<=t;i++){
		scanf("%lld",&n);
		for(j=0;j<34;j++){
			for(k=0;k<34;k++){
				matrix2[j][k]=0;
			}
		}
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				scanf("%lld",&matrix1[j][k]);
				matrix2[j][k]=matrix1[j][k];
			}
		}
		for(int j=0;j<n;j++){
			multiply(matrix1,matrix2,matrix3);
			for(k=0;k<n;k++){
				for(int l=0;l<n;l++){
					matrix2[k][l]=matrix3[k][l];
				}
			}	
		}
	
	
		printf("Case #%lld:\n",i);
		
		for(j=0;j<n;j++){
			printf("%lld",matrix2[j][0]);
			for(k=1;k<n;k++){
				printf(" %lld",matrix2[j][k]);
			}
			printf("\n");
		}
		
		
	}
	return 0;
	
}
