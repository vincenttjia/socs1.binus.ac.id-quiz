#include<stdio.h>

char toupper(char x){
	if(x>='a'&&x<='z'){
		x=x-'a'+'A';
	}
	return x;
}

int main(){
	FILE *fp=fopen("testdata.in","r");
	int t,index,array[30];
	char string[1005];
	fscanf(fp,"%d\n",&t);
	for(int aa=1;aa<=t;aa++){
		for(int i=0;i<30;i++){
			array[i]=0;
		}
		index=0;
		fscanf(fp,"%[^\n]\n",&string);
		while(string[index]!='\0'){
			if(string[index]==' '){
				index++;
				continue;
			}
			array[toupper(string[index])-'A']++;
			index++;
		}
		printf("Case #%d:\n",aa);
		index=0;
		for(int i=0;i<5;i++){
			printf("%c : %d",index+'A',array[index]);
			index++;
			for(int j=0;j<4;j++){
				printf(", %c : %d",index+'A',array[index]);
				index++;
			}
			printf("\n");
		}
		printf("%c : %d\n\n",index+'A',array[index]);
		index++;
	}
	fclose(fp);
}
