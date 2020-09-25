#include <stdio.h>
int main(){
	int x,d=1;
	scanf("%d",&x);
	for(x;x>0;x--){
		unsigned long long int y,a,b,c=0,awal,count=0,arr[100000]={0},total=0;
		scanf("%llu %llu %llu",&y,&a,&b);
		awal = a;
		for(c=0;c != 1;c){
			a = (a  * b ) % y;
			count = count+1;
			if(arr[a] == 0 && a != awal){
				arr[a] = count;
			}
			else{
				total = count - arr[a];
				c = c+1;
			}
		}
		printf("Case #%d: %llu\n",d,total);
		count = 0;
		d = d+1;
		}
		return 0;
	}
