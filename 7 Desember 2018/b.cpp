#include<stdio.h>
#include<string.h>

void encrypt(char text[],int n){
	int len=strlen(text);
	for(int i=0;i<len;i++){
		if(text[i]>='A' && text[i]<='Z'){
			printf("%c",char(int(text[i]+n-65)%26)+65);
		}else if(text[i]>='a' && text[i]<='z'){
			printf("%c",char(int(text[i]+n-97)%26)+97);
		}else{
			printf("%c",text[i]);
		}
	}
}

int main(){
	int t,n;
	char input[1005];
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		for(int i=0;i<1005;i++){
			input[i]='\0';
		}
		scanf("%d",&n);
		getchar();
		scanf("%[^\n]",&input);
		printf("Case #%d: ",tt);
		encrypt(input,n);
		printf("\n");
	}
	return 0;
}
