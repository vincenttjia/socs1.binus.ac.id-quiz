#include<stdio.h>
#include<string.h>

int flag=0;

void check(int index,char a[]){
	if(a[index+1]=='O' || a[index+1]=='o'){
		if(a[index+2]=='O' || a[index+2]=='o'){
			if(a[index+3]=='D' || a[index+3]=='d'){
				flag=1;
			}
		}
	}
}

int main(){
	int t,len;
	char a[85];
	scanf("%d",&t);
	getchar();
	for(int i=1;i<=t;i++){
		flag=0;
		scanf("%[^\n]",a);
		getchar();
		len=strlen(a);
		for(int j=0;j<len;j++){
			if(a[j]=='G' || a[j]=='g'){
				check(j,a);
			}
		}
		if(flag==1){
			printf("Case #%d: yes\n",i);
		}else{
			printf("Case #%d: no\n",i);
		}
	}
	return 0;
}
