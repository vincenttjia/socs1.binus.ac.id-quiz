#include<stdio.h>
#include<math.h>
#include<string.h>
//#include<soal nya susah.h>

int bin2dec(int x[],long long len){
	long long dec=0,remainder=0,a=0;
	for(int i=len-1;i>=0;i--){
	//	printf("%d %d %d\n",i,remainder,dec);
		remainder=x[i];
		dec+= remainder * pow(2,a);
		a++;
	}
	return dec;
}


int main(){
	int t;
	char input[200];
	int positif[40],negatif[40];
	long long len,dec,index,reallen,minus;
	long long x,y;
	scanf("%d",&t);
	for(int aa=1;aa<=t;aa++){
		for(int i=0;i<35;i++){
			positif[i]=0;
			negatif[i]=0;
		}
		minus=0;
		scanf("%s",input);
		len=strlen(input);
		
		index=-1;
		for(int i=0;i<len;i++){
			index++;
//			printf("i: %d\n",i);
			if(input[i]=='1'){
//				printf("%d Positif\n",i);
				positif[index]=1;
			}else if(input[i]=='('){
//				printf("%d Negatif\n",i);
				negatif[index]=1;
				minus++;
				i+=3;
			}
		}
		reallen=len-minus*3;
		printf("%d %d\n",reallen,minus);
		for(int i=0;i<reallen;i++){
			printf("%d",positif[i]);
			
		}
		printf("\n");
		for(int i=0;i<reallen;i++){
			printf("%d",negatif[i]);
		}
		printf("\n\n");
		x=bin2dec(positif,reallen);
		y=bin2dec(negatif,reallen);
		printf("pos;%d neg;%d\n\n",x,y);
		dec=x-y;
		printf("Case #%d: %lld\n",aa,dec);
		
	}
	return 0;
}
