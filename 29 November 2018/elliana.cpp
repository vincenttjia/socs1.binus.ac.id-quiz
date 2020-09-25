#include<stdio.h>


void good(char x[])
{
 int count=0;
   
 for(int j = 0 ; j < 80 ; j++)
 {
  if(x[j]=='G'|| x[j] == 'g')
  {
  	printf("cek");
   if(x[j+1]=='O'||x[j+1] == 'o')
   {
    if(x[j+2]=='O'||x[j+2] == 'o')
    {
       
     if(x[j+3]=='D'||x[j+3] == 'd')
     {
     	printf("OK");
      count=1; break;
     }
    }
   }
  }
 }
 
   if(count == 1)
   {
    printf("yes\n"); 
   }
   else
   {
    printf("no\n");
   }
   
}


int main()
{
 char a[1005];
 
 int tc,i;
 scanf("%d",&tc);
  
  for(int i = 0 ; i < tc ; i++)
  {
   getchar();
   scanf("%[^\n]",a);
   printf("Case #%d: ",i+1);
   
   good(a);
    
  }
 

 return 0;
}
