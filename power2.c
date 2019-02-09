#include<stdio.h>
int main(void)
{
int i,n,flag=0;
scanf("%d",&n);
while(n>1)
{
if(n%2!=0)
{
flag=1;
break;
}
n=n/2;
}
if(flag==1)
{
printf("no");
}
else
printf("yes");
}
