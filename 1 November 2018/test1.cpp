#include<stdio.h>
#include<string.h>

struct Student{
	char nama[25];
	int berat;
	int tinggi;
}st[15];

int main(){
	int option=0;
	int choice=0;
	strcpy(st[0].nama,"Vincent");	st[0].berat=62;		st[0].tinggi=172;
	strcpy(st[1].nama,"Kelvin");	st[1].berat=60;		st[1].tinggi=180;
	strcpy(st[2].nama,"Sugi");		st[2].berat=60;		st[2].tinggi=160;
	strcpy(st[3].nama,"Macher");	st[3].berat=70;		st[3].tinggi=175;
	strcpy(st[4].nama,"Kevin");		st[4].berat=60;		st[4].tinggi=180;
	strcpy(st[5].nama,"Gerald");	st[5].berat=100;	st[5].tinggi=1;
	strcpy(st[6].nama,"Nadine");	st[6].berat=50;		st[6].tinggi=165;
	strcpy(st[7].nama,"Ryan");		st[7].berat=1;		st[7].tinggi=200;
	int index=8;
	char nama[25];
	int input;
	int input1;
	int flag;
	
	printf("%2s. %-15s %-10s %-10s\n","No","Nama","Berat","Tinggi");
	do{
		for(int i=0;i<index;i++){
			printf("%2d. %-15s %-4d%-6s %-5d%-5s\n",i+1,st[i].nama,st[i].berat,"Kg",st[i].tinggi,"cm(s)");
		}
		printf("\n\n1. Edit Murid\n2. Delete Murid\n3. Exit\nChoose : ");
		scanf("%d",&option);
		getchar();
		if(option==1){
			printf("Please Input Index: ");
			scanf("%d",&choice);
			getchar();
			choice--;
			do{
				flag=0;
				printf("Please Input Name[3..20] : ");
				scanf("%[^\n]",nama);
				getchar();
				for(int i=0;i<index;i++){
					if(strcmpi(nama,st[i].nama)==0){
						flag=1;
						break;
					}
				}
			}while(flag==1||strlen(nama)<3||strlen(nama)>20);
			do{
				printf("Please Input Tinggi[100 - 200] : ");
				scanf("%d",&input);
				getchar();
			}while(input<100||input>200);
			do{
				printf("Please Input Berat[10 - 100] : ");
				scanf("%d",&input1);
				getchar();
			}while(input1<10||input1>100);
			strcpy(st[choice].nama,nama);
			st[choice].berat=input1;
			st[choice].tinggi=input;
			continue;
		}
		if(option==2){
			do{
				flag=-1;
				printf("Please input nama to delete : ");
				scanf("%s",nama);
				getchar();
				for(int i=0;i<index;i++){
					if(strcmp(nama,st[i].nama)==0){
						flag=i;
						break;
					}
				}
				if(flag==-1){
					printf("Name not found!\n");
				}
			}while(flag==-1);
			for(int i=flag+1;i<index;i++){
				strcpy(st[i-1].nama,st[i].nama);
				st[i-1].tinggi=st[i].tinggi;
				st[i-1].berat=st[i].berat;
			}
			index--;
			continue;
		}
	}while(option!=3);
	
	
	
}
