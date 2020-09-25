#include<stdio.h>
int abs(int x){
	if(x<0){
		return -x;
	}
	return x;
}

int main(){
	int t,x,y,n,arr[3][3],flagt,flag;
	scanf("%d",&t);
	for(int aa=1;aa<=t;aa++){
		flag=0;
		flagt=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				arr[i][j]=0;
			}
		}
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %d",&x,&y);
				x=x/abs(x);
				y=y/abs(y);
				if(x<0)
				x++;
				if(y<0)
				y++;
				arr[x][y]++;
		}
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				if(arr[i][j]>0){
					if(flagt==0){
						if(arr[i][j]>1){
							flagt=1;
							continue;
						}
					}
					if(arr[i][j]>1){
						flag=1;
					}
				}
			}
		}
		if(flag==0){
			printf("Case #%d: YES\n",aa);
		}else{
			printf("Case #%d: NO\n",aa);
		}
	}
	
}
