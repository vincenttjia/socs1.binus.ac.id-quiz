#include<stdio.h>

char chess[10][10];


int check(int i,int j,int from){
	if(chess[i][j]=='p' || chess[i][j]=='r' || chess[i][j]=='b' || chess[i][j]=='q' || chess[i][j]=='k' || chess[i][j]=='n'){
//		chess[i][j]=from+48;
		chess[i][j]='#';
		return 0;
	}
	if(chess[i][j]!='.'){
		return 0;
	}
	return 1;
}

void pawn(int i,int j){
	check(i-1,j+1,0);
	check(i-1,j-1,0);
}

void bishop(int i,int j,int from){
	int a=i-1;
	int b=j-1;
	while(check(a,b,from) && a>=0 && b>=0){
		a--;
		b--;
	}
	a=i-1;
	b=j+1;
	while(check(a,b,from) && a>=0 && b<=7){
		a--;
		b++;
	}
	a=i+1;
	b=j+1;
	while(check(a,b,from) && a<=7 && b<=7){
		a++;
		b++;
	}
	a=i+1;
	b=j-1;
	while(check(a,b,from) && a<=7 && b>=0){
		a++;
		b--;
	}
}

void rook(int i,int j,int from){
	int a=j+1;
	while(check(i,a,from) && a<=7){
		a++;
	}
	a=j-1;
	while(check(i,a,from) && a>=0){
		a--;
	}
	a=i-1;
	while(check(a,j,from) && a>=0){
		a--;
	}
	a=i+1;
	while(check(a,j,from) && a<=7){
		a++;
	}
}

void queen(int i,int j){
	rook(i,j,3);
	bishop(i,j,3);
}

void king(int i,int j){
	//printf("king:\n");
	check(i-1,j-1,4);
	check(i-1,j,4);
	check(i-1,j+1,4);
	check(i,j-1,4);
	check(i,j+1,4);
	check(i+1,j-1,4);
	check(i+1,j,4);
	check(i+1,j+1,4);
}

void knight(int i,int j){
	//printf("knight\n");
	check(i-2,j-1,5);
	check(i-2,j+1,5);
	check(i-1,j-2,5);
	check(i-1,j+2,5);
	check(i+1,j-2,5);
	check(i+1,j+2,5);
	check(i+2,j-1,5);
	check(i+2,j+1,5);
}



int main(){
	int t,flag=0;
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				chess[i][j]='\0';
			}
		}
		for(int i=0;i<=7;i++){
			scanf("%s",chess[i]);
		}
		printf("Case #%d:\n",tt);
		for(int i=0;i<=7;i++){
			for(int j=0;j<=7;j++){
				if(chess[i][j]=='P'){
					pawn(i,j);
				}else if(chess[i][j]=='B'){
					bishop(i,j,1);
				}else if(chess[i][j]=='R'){
					rook(i,j,2);
				}else if(chess[i][j]=='Q'){
					queen(i,j);
				}else if(chess[i][j]=='K'){
					king(i,j);
				}else if(chess[i][j]=='N'){
					knight(i,j);
				}
			}
		}
		flag=0;
		for(int i=0;i<=7;i++){
			for(int j=0;j<=7;j++){
//				printf("%c",chess[i][j]);
				if(chess[i][j]=='#'){
					printf("%c %d\n",j+65,8-i);
					flag=1;
				}
			}
//			printf("\n");
		}
		if(flag==0){
			printf("-1\n");
		}
		
		
	}
	return 0;
}
