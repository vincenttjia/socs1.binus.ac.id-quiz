#include <stdio.h>

int main(){
	long long int T, N, matrix[31][31];
	long long int newMatrix[31][31], tempMatrix[31][31];
	long long int i, j, k;
	long long int l, m, sum=0;
	
	scanf("%lli", &T);
	for(i = 1; i <= T; i++){
		scanf("%lli", &N);
		for(j = 0; j < N; j++){
			for(k = 0; k < N; k++){
				scanf("%lli", &matrix[j][k]);
			}
		}
		
		for(j = 0; j < N; j++){
			for(k = 0; k < N; k++){
				newMatrix[j][k] = matrix[j][k];
			}
		}
		m = 1;
		while(m < N){
			for(j = 0; j < N; j++){
				for(k = 0; k < N; k++){
					for(l = 0; l < N; l++){
						sum = ((sum % 1000000007) + ((newMatrix[j][l] * matrix[l][k]) % 1000000007)) % 1000000007;
					}
					tempMatrix[j][k] = sum;
					sum = 0;
				}
			}
				
			for(j = 0; j < N; j++){
				for(k = 0; k < N; k++){
					newMatrix[j][k] = tempMatrix[j][k] % 1000000007;
				}
			}
			m++;	
		}

		printf("Case #%lli:\n", i);
		for(j = 0; j < N; j++){
			for (k = 0; k < N; k++){
				if (k == 0){
					printf("%lli", newMatrix[j][k]);
				}
				else{
					printf(" %lli", newMatrix[j][k]);
				}
			}
			printf("\n");
		}	
	}
}
