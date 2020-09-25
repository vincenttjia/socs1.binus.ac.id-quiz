#include <stdio.h>

//white - kapital
//black - nonkapital

int count;
int temp,temp2;
int arr[8][1];
int flag2[8]={-1};
int tunjuk=0;
int flag;
int idx=0;
int ceks=0;

int simpan[100];
int simpan2[100];
int x1=0;

void cek(int idx)
{
	int temp;
	int flag=0;

	if (flag2[idx]!=-1)
	{
		ceks++;
		for (int i=0;i<x1;i++)
		{
			if ((arr[idx][1]+65==simpan[i]) && (8-arr[idx][0]==simpan2[i]))
				flag=1;
		}

		if (flag==0)
		{
			simpan[x1]=arr[idx][1]+65;
			simpan2[x1]=8-arr[idx][0];
			x1++;
		}
	}

	if (flag==0)
	{
		for (int i=0;i<x1-1;i++)
		{
			for (int j=i+1;j<x1;j++)
			{
				if (simpan2[i]<simpan2[j])
				{
					temp=simpan[i];
					simpan[i]=simpan[j];
					simpan[j]=temp;

					temp=simpan2[i];
					simpan2[i]=simpan2[j];
					simpan2[j]=temp;

				}
				if (simpan2[i]==simpan2[j] && simpan[i]>simpan[j])
				{
					temp=simpan[i];
					simpan[i]=simpan[j];
					simpan[j]=temp;

					temp=simpan2[i];
					simpan2[i]=simpan2[j];
					simpan2[j]=temp;
				}
			}
		}
	}

}

void print()
{
	int count=0;

	if(ceks==0)
	{
		printf("-1\n");
	}
	else
	{
		for (int i=0;i<x1;i++)
		{
				printf("%c %d\n",simpan[i],simpan2[i]);
		}
	}

}
void kosong(int i,int j)
{
	count=0;
	tunjuk=0;
	idx=0;
	temp=i;
	temp2=j;
	for (int i=0;i<8;i++)
	{
		for (int j=0;j<1;j++)
		{
			arr[i][j]=0;
		}

		flag2[i]=-1;
	}
}

void satu()
{
	temp++;
	if (temp>7)
		flag=1;
}
void dua()
{
	temp--;
	if (flag<0)
		flag=1;
}
void tiga()
{
	temp2--;
	if(temp2<0)
		flag=1;
}
void empat()
{
	temp2++;
	if(temp2>7)
		flag=1;
}
void lima()
{
		temp++;
		temp2--;
	if(temp>7 || temp2<0)
		flag=1;
}
void enam()
{

		temp++;
		temp2++;

	if (temp>7 || temp2>7)
		flag=1;

}
void tujuh()
{	

		temp--;
		temp2++;

	if (temp<0 || temp2>7)
		flag=1;
}
void lapan()
{

		temp--;
		temp2--;

	if (temp<0 || temp2<0)
		flag=1;
}

void geser(int x)
{
	switch(x)
	{
		case 0:
			satu();
			break;
		case 1:
			dua();
			break;
		case 2:
			tiga();
			break;
		case 3:
			empat();
			break;
		case 4:
			lima();
			break;
		case 5:
			enam();
			break;
		case 6:
			tujuh();
			break;
		case 7:
			lapan();
			break;
	}
}

void RBQ(int awal, int jum,char map[8][8],int i, int j)
{
	kosong(i,j);
	for (int k=awal;k<jum;k++)
	{
		flag=0;
		temp=i;temp2=j;
		do
		{
			geser(k);
			if (flag==1)
				break;
			if (map[temp][temp2]>='a' && map[temp][temp2]<='z')
			{
				count++;
				flag2[idx]=tunjuk;
				arr[tunjuk][0]=temp;
				arr[tunjuk][1]=temp2;
				// printf("Nilai: %d %d\n",temp,temp2);
				// printf("Nilai idx: %d\n",idx);
				// printf("Nilai tunjuk: %d\n",tunjuk);
				cek(idx);
				break;
			}
		}while(map[temp][temp2]=='.');
		tunjuk++;idx++;
	}
}

void pawn(char map[8][8],int i, int j)
{
	kosong(i,j);
	if (i-1>=0 || j-1>=0)
	{	
		if (map[i-1][j-1]>=97 && map[i-1][j-1]<=122)
			{
				count++;
				flag2[idx]=1;
				arr[0][0]=i-1;
				arr[0][1]=j-1;
			}
			cek(idx);
			idx++;
	}
	if (i-1>=0 || j+1<8)
	{
		if (map[i-1][j+1]>=97 && map[i-1][j+1]<=122)
			{
				count++;
				flag2[idx]=1;
				arr[1][0]=i-1;
				arr[1][1]=j+1;
			}
			cek(idx);
	}
}	

void knight(char map[8][8],int i, int j)
{
	kosong(i,j);

	if ((i-1>=0 && j-2>=0) &&map[i-1][j-2]>=97 && map[i-1][j-2]<=122)
	{
		count++;
		flag2[idx]=0;
		arr[0][0]=i-1;
		arr[0][1]=j-2;
	}
	cek(idx);
	idx++;

	if ((i-1>=0 && j+2<=7) && map[i-1][j+2]>=97 && map[i-1][j+2]<=122)
	{
		count++;
		flag2[idx]=1;
		arr[1][0]=i-1;
		arr[1][1]=j+2;
	}
	cek(idx);
	idx++;

	if ((i+1<8 && j-2>=0) && map[i+1][j-2]>=97 && map[i+1][j-2]<=122)
	{
		count++;
		flag2[idx]=2;
		arr[2][0]=i+1;
		arr[2][1]=j-2;
	}
	cek(idx);
	idx++;

	if ((i+1<8 && j+2<8) && map[i+1][j+2]>=97 && map[i+1][j+2]<=122)
	{
		count++;
		flag2[idx]=3;
		arr[3][0]=i+1;
		arr[3][1]=j+2;
	}
	cek(idx);
	idx++;

	if ((i-2>=0 && j-1>=0) && map[i-2][j-1]>=97 && map[i-2][j-1]<=122)
	{
		count++;
		flag2[idx]=4;
		arr[4][0]=i-2;
		arr[4][1]=j-1;
	}
	cek(idx);
	idx++;

	if ((i-2>=0 && j+1<8) && map[i-2][j+1]>=97 && map[i-2][j+1]<=122)
	{
		count++;
		flag2[idx]=5;
		arr[5][0]=i-2;
		arr[5][1]=j+1;
	}
	cek(idx);
	idx++;

	if ((i+2<8 && j-1>=0) && map[i+2][j-1]>=97 && map[i+2][j-1]<=122)
	{
		count++;
		flag2[idx]=6;
		arr[6][0]=i+2;
		arr[6][1]=j-1;
	}
	cek(idx);
	idx++;

	if ((i+2<=7 && j+1<8) && map[i+2][j+1]>=97 && map[i+2][j+1]<=122)
	{
		count++;
		flag2[idx]=7;
		arr[7][0]=i+2;
		arr[7][1]=j+1;
	}
	cek(idx);
}

void king(char map[8][8],int i, int j)
{
	kosong(i,j);
	if (i-1>=0 && map[i-1][j]>=97 && map[i-1][j]<=122)
	{
		count++;
		flag2[idx]=0;
		arr[0][0]=i-1;
		arr[0][1]=j;
	}
	cek(idx);
	idx++;

	if ((i-1>=0 && j-1>=0) && map[i-1][j-1]>=97 && map[i-1][j-1]<=122)
	{
		count++;
		flag2[idx]=1;
		arr[1][0]=i-1;
		arr[1][1]=j-1;
	}
	cek(idx);
	idx++;

	if ((i-1>=0 && j+1<=7) && map[i-1][j+1]>=97 && map[i-1][j+1]<=122)
	{
		count++;
		flag2[idx]=2;
		arr[2][0]=i-1;
		arr[2][1]=j+1;
	}
	cek(idx);
	idx++;

	if (i+1<=7 && map[i+1][j]>=97 && map[i+1][j]<=122)
	{
		count++;
		flag2[idx]=3;
		arr[3][0]=i+1;
		arr[3][1]=j;
	}
	cek(idx);
	idx++;

	if ((i+1<=7 && j-1>=0) && map[i+1][j-1]>=97 && map[i+1][j-1]<=122)
	{
		count++;
		flag2[idx]=4;
		arr[4][0]=i+1;
		arr[4][1]=j-1;
	}
	cek(idx);
	idx++;

	if ((i+1<=7 && j+1<=7) && map[i+1][j+1]>=97 && map[i+1][j+1]<=122)
	{
		count++;
		flag2[idx]=5;
		arr[5][0]=i+1;
		arr[5][1]=j+1;
	}
	cek(idx);
	idx++;

	if (j-1>=0 && map[i][j-1]>=97 && map[i][j-1]<=122)
	{
		count++;
		flag2[idx]=6;
		arr[6][0]=i;
		arr[6][1]=j-1;
	}
	cek(idx);
	idx++;

	if (j+1<=7 && map[i][j+1]>=97 && map[i][j+1]<=122)
	{
		count++;
		flag2[idx]=7;
		arr[7][0]=i;
		arr[7][1]=j+1;
	}
	cek(idx);
}

int main()
{
	char map[8][8];
	int c;

	scanf("%d",&c);
	getchar();

	for (int g=1;g<=c;g++)
	{
		ceks=0;
		x1=0;
		for (int i=0;i<8;i++)
		{
			scanf("%s",map[i]);
		}

		for (int i=0;i<100;i++)
		{
			simpan[i]=0;
			simpan2[i]=0;
		}
		for (int i=0;i<8;i++)
		{
			for (int j=0;j<8;j++)
			{
				kosong(i,j);
				if (map[i][j]=='P')
					pawn(map,i,j);
				if (map[i][j]=='R')
					RBQ(0,4,map,i,j);
				if (map[i][j]=='B')
					RBQ(4,8,map,i,j);
				if (map[i][j]=='Q')
					RBQ(0,8,map,i,j);
				if (map[i][j]=='K')
					king(map,i,j);
				if (map[i][j]=='N')
					knight(map,i,j);
			}
		}
		printf("Case #%d:\n",g);
		print();
	}

	return 0;
}