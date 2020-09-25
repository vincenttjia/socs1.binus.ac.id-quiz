#include<stdio.h>

int main(){
	int first,last,input;
	char array[1000]={};
	scanf("%d",&input);
	first=1;
	last=input;
	
	while(first<last){
		sprintf(array,"%s%d%d",array,first,last);
		first++;
		last--;
	}
	if(first==last){
		sprintf(array,"%s%d",array,first);
	}
	printf("%s",array);
}
