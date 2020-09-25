#include<stdio.h>

int flag=0;
char chess[10][10];

int check(int i,int j,int come){
	if(chess[i][j]=='p' || chess[i][j]=='r' || chess[i][j]=='b' || chess[i][j]=='q' || chess[i][j]=='k' || chess[i][j]=='n'){
		//chess[i][j]=come+48;
		chess[i][j]='#';
		return 1;
	}
	if(chess[i][j]=='P' || chess[i][j]=='R' || chess[i][j]=='B' || chess[i][j]=='Q' || chess[i][j]=='K' || chess[i][j]=='N'){
		return 1;
	}
	return 0;
}

void pawn(int i,int j){
	//printf("pawn:\n");
	check(i-1,j-1,1);
	//printf("pawn:\n");
	check(i-1,j+1,1);
}

void rook(int i,int j){
	int x=0;
	for(int a=i-1;a>=0;a--){
		//printf("rook\n");
		x=check(a,j,2);
		if(x==1){
			break;
		}
	}
	x=0;
	for(int a=i+1;a<8;a++){
		//printf("rook\n");
		x=check(a,j,2);
		if(x==1){
			break;
		}
	}
	x=0;
	for(int a=j-1;a>=0;a--){
		//printf("rook\n");
		x=check(i,a,2);
		if(x==1){
			break;
		}
	}
	x=0;
	for(int a=j+1;a<8;a++){
		//printf("rook\n");
		x=check(i,a,2);
		if(x==1){
			break;
		}
	}
}

void bishop(int i,int j){
	int a=1;
	int x=0;
	while(i+a>=0 && i+a<8 && j+a>=0 && j+a<8 && x==0){
		//printf("1\n");
		x=check(i+a,j+a,3);
		a++;
	}
	a=1;
	x=0;
	while(i-a>=0 && i-a<8 && j-a>=0 && j-a<8 && x==0){
		//printf("2\n");
		x=check(i-a,j-a,3);
		a++;
	}
	a=1;
	x=0;
	while(i+a>=0 && i+a<8 && j-a>=0 && j-a<8 && x==0){
		//printf("3\n");
		x=check(i+a,j-a,3);
		a++;
	}
	a=1;
	x=0;
	while(i-a>=0 && i-a<8 && j+a>=0 && j+a<8 && x==0){
		//printf("4\n");
		x=check(i-a,j+a,3);
		a++;
	}
}

void queen(int i,int j){
	//printf(".queen\n");
	bishop(i,j);
	rook(i,j);
	//printf("queen.\n");
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
	int t;
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				chess[i][j]='\0';
			}
		}
		flag=0;
		for(int i=0;i<8;i++){
			scanf("%s",chess[i]);
		}
		printf("Case #%d:\n",tt);
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(chess[i][j]=='P'){
					pawn(i,j);
				}else if(chess[i][j]=='B'){
					bishop(i,j);
				}else if(chess[i][j]=='R'){
					rook(i,j);
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
