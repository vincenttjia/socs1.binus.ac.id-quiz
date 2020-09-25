#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int z=1;z<=t;z++){
		int r,c;
		scanf("%d %d",&r,&c);
		char a[15][15],b[15];
		for(int i=0;i<r;i++){
			scanf("%s",b);
			for(int j=0;j<c;j++){
				a[i][j]=b[j];
			}
		}
	
	int flag;
	for(int i=0;i<r;i++){
		flag=0;
		for(int j=0;j<c;j++){
				if(a[i][j]=='S' || a[i][j]=='s'){
					flag=1;
				}
			}
			if(flag==0){
				for(int j=0;j<c;j++){
						a[i][j]='#';
				}
			}
		}
	
	for(int j=0;j<c;j++){
		flag=0;
		for(int i=0;i<r;i++){
			if(a[i][j]=='S' || a[i][j]=='s'){
				flag=1;
			}
		}
		if(flag==0){
			for(int i=0;i<r;i++){
				a[i][j]='#';
			}
		}
	}
	

	int counter=0;		
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]=='#'){
				counter++;
			}
		}
	}


		printf("Case #%d: %d\n",z,counter);
	}
	return 0;
}
