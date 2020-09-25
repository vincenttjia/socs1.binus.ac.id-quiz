#include<stdio.h>


void shift(char a,int n){
	if(a>='A' && a<='Z'){
		printf("gede\n");
	}else if(a>='a' && a<='z'){
		printf("kecin\n");
	}else{
		printf("else\n");
	}
}

int strlen(char a[]){
	int count=0;
	while(a[count]!='\0'){
		count++;
	}
}

int main(){
	int t,len,n;
	char input[110];
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++){
		scanf("%d",&n);
		n=n%26;
		getchar();
		scanf("%[^\n]",input);
	//	printf("Case #%d: ",tt);
		len=strlen(input);
		printf("len%d\n",len);
		for(int i=0;i<len;i++){
			printf("i:%d c:%c\n",i,input[i]);
			shift(input[i],n);
		}
		printf("\n");
	}
	return 0;
}
