#include<stdio.h>
int main(void)
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0 && (i+1)%2!=0||(a[i]%2==0 && (i+1)%2==0))
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
