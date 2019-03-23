#include <stdio.h>
int main(void)
{
int a[50],i,n,big,small;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]); 
{
	small=a[0];
	for(i=1;i<n;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
  }
}
		printf("%d\t",small);
		big=a[0];
	for(i=1;i<n;i++)
	{
		if(big<a[i])
		{
			big=a[i];
		}
  }
		printf("%d\t",big);
	return 0;
}
