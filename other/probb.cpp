#include <stdio.h>
#include <ctype.h>

void crypto(int shift, char letters){ 
	if(isalpha(letters)){
		letters+=shift;
		if(letters>'Z'&&letters<'a'){
			printf("%c",letters-26);
		}
		else if(letters>'z'){
			printf("%c",letters-26);
		}
		else printf("%c",letters);
	}
	else printf("%c",letters);
}

int main()
{
	int testcase;
	int shift;
	char letters[101];
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d",&shift); getchar();
		scanf("%[^\n]",letters);
		printf("Case #%d: ",i+1);
		for(int j=0;letters[j]!='\0';j++){
			crypto(shift,letters[j]);
		}
		printf("\n");
	}
	return 0;
}
