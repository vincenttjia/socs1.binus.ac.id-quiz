#include<stdio.h>

char chess[10][10];


void check(int x,int y){
	if(chess[x][y]=='p' || chess[x][y]=='r' || chess[x][y]=='b' || chess[x][y]=='q' || chess[x][y]=='k' || chess[x][y]=='n'){
		printf("%c %d\n",y+64,9-x);
	}
}

void check_pawn(int x,int y){
	check(x-1,y+1);
	check(x-1,y-1);
}

void check_rook(int x,int y){
	for(int i=1;i<x;i++){
		check(x,i);
	}
	for(int i=x+1;i<=8;i++){
		check(x,i);
	}
	for(int i=1;i<x;i++){
		check(i,y);
	}
	for(int i=x+1;i<=8;i++){
		check(i,y);
	}
}


void check_bishop(int x,int y){
	for(int i=-9;i<9;i++){
		if(x+i>=1 && x+i<=8 && y+i<=8 && y+i>=1 && i!=0){
			check(x+i,y+i);
		}
		if(x-i>=1 && x-i<=8 && y+i<=8 && y+i>=1 && i!=0){
			check(x-i,y+i);
		}
	}
}

void check_king(int x,int y){
	check(x-1,y-1);
	check(x-1,y);
	check(x-1,y+1);
	check(x,y-1);
	check(x,y+1);
	check(x+1,y-1);
	check(x+1,y);
	check(x+1,y+1);
}

void check_knight(int x,int y){
	check(x-2,y-1);
	check(x-2,y+1);
	check(x-1,y-2);
	check(x-1,y+2);
	check(x+1,y-2);
	check(x+1,y+2);
	check(x+2,y-1);
	check(x+2,y+1);
}

int main(){
	int t;
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				chess[i][j]='\0';
			}
		}
		for(int i=1;i<9;i++){
			scanf("%s",&chess[i]);
		}
		printf("Case #%d: \n",tt);
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				if(chess[i][j]=='P'){
					check_pawn(i,j);	
				}else if(chess[i][j]=='R'){
					check_rook(i,j);
				}else if(chess[i][j]=='B'){
					check_bishop(i,j);
				}else if(chess[i][j]=='Q'){
					check_bishop(i,j);
					check_rook(i,j);
				}else if(chess[i][j]=='K'){
					check_king(i,j);
				}else if(chess[i][j]=='N'){
					check_knight(i,j);
				}
			}
		}
	}
	return 0;
}
