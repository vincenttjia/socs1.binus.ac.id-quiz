#include<stdio.h>

struct abc{
	int yes;
	int day;
	int month;
	int year;
	char nama[105];
	char ad[105];
}data[105];

int main(){
	int n,id;
	scanf("%d",&n);
	for(int i=0;i<105;i++){
		data[i].yes=0;
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&id);
		scanf("%d %d %d %s %s",&data[id].day,&data[id].month,&data[id].year,&data[id].nama,&data[id].ad);
		data[id].yes=1;
	}
	int q,x;
	scanf("%d",&q);
	for(int i=1;i<=q;i++){
		scanf("%d",&x);
		if(data[x].yes==1){
			printf("%d. %s was born on %d/%d/%d and live at %s\n",x,data[x].nama,data[x].day,data[x].month,data[x].year,data[x].ad);
			
		}else{
			printf("No data found!\n");
		}
	}
}
