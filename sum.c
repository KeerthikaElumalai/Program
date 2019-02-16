#include<stdio.h>
int main(void)
{
int n, sum=0,c,value;
scanf("%d",&n);
printf("\n",n);
for(c=1;c<=n;c++)
{
scanf("%d",&value);
sum = sum+value;
}
printf("%d\n",sum);
return 0;
}
