#include<stdio.h>
int main(void)
{
 int i,n,c=0;
 scanf("%d",&n);
 for(i=n;i<=n;i++)
 {
  if(n%i==0)
  c=c+1;
 }
 if(c==2)
 printf("no");
 else
 printf("yes");
 return 0;
 }
  
