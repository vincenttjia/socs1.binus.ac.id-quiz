#include<stdio.h>

char toupper(char x){
	if(x>'a'&&x<'z'){
		x=x-'a'+'A';
	}
	return x;
}

int main(){
	char string[100],index=0;
	scanf("%s",string);
	while(string[index]){
		printf("%c",toupper(string[index]));
		index++;
	}
}
