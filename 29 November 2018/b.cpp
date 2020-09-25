#include<stdio.h>

void check(char a[105][105],int x,int y){
	if(a[x][y]=='|'){
		if(a[x+1][y]=='|' || a[x+1][y]=='/' || a[x+1][y]=='\\'){
			check(a,x+1,y);
			a[x+1][y]='.';
		}
	}
	if(a[x][y]=='/'){
		if(a[x+1][y-1]=='|' || a[x+1][y-1]=='/' || a[x+1][y-1]=='\\'){
			check(a,x+1,y-1);
			a[x+1][y-1]='.';
		}
	}
	if(a[x][y]=='\\'){
		if(a[x+1][y+1]=='|' || a[x+1][y+1]=='/' || a[x+1][y+1]=='\\'){
			check(a,x+1,y+1);
			a[x+1][y+1]='.';
		}
	}
	
	
}

int main(){
	int t,n,m,count,x,y;
	char a[105][105];
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		count=0;
		scanf("%d %d",&n,&m);
		for(int j=0;j<n;j++){
			scanf("%s",a[j]);
		}
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				if(a[j][k]=='|' || a[j][k]=='/' || a[j][k]=='\\'){
					count++;
					check(a,j,k);
				}
			}
		}
		printf("Case #%d: %d\n",i,count);
	}
}
