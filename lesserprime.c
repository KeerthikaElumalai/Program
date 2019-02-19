#include<stdio.h>
int main(void)
{
 int n,m,b,i;
 scanf("%d",&m);
 for(b=2;b<m;b++)
 {
  i=2;
  while(b%i!=0)
  {
   i++;
  }
  if(i==b)
  {
   printf("%d ",b);
  }
 } 
 return 0;
}




