#include<stdio.h>
#include<string.h>
#include<math.h>


int main(){
	int t,count,index,minus,index1;
	char input[50];
	int array[50];
	int i,SA;
	int len2;
	int result;
	int dec,dec1;
	int len;
	int base;
	scanf("%d",&t);
	for(int a=1;a<=t;a++){
		scanf("%s",input);
		index=0;
		len=strlen(input);
		index1=0;
		for(i=len-1;i>=0;i--){
			if(input[i]==')' && input[i-1]=='1' && input[i-2]=='-' && input[i-3]=='('){
				index=len-i;
				SA=len-i-1;
				array[index1]=0;
				index1++;
				i-=3;
			}else{
				if(input[i]-48==0){
					array[index1]=0;
					index1++;
//					printf("0%d\n",i);
				}else{
					array[index1]=1;
					index1++;
//					printf("1%d\n",i);
				}
			}
		}
		dec=0;
		base=1;
//		printf("\n");
//		
//		for(int i=0;i<=len-4;i++){
//			printf("%d",array[i]);
//		}
//		printf("\n");
		
		
		for(int i=0;i<len-3;i++){
			if(array[i]==1){
				dec+=base;
//				printf("#%d ",base);
			}
			base*=2;
//			printf("%d ",base);
		}
		
//		printf("\n");
		
		
		
		minus=pow(2,SA);
//		printf("%d-%d\n",dec,minus);
		dec1=dec-minus;
		printf("Case #%d: %d\n",a,dec1);
		
		
		
	}
	return 0;
}
