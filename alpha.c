#include<stdio.h>
int main()
{
    char ch;
	printf(" ");
	scanf("%c",&ch);
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf(" alphabet",ch);
	}
	else
	{
		printf("not an alphabet",ch);
	}
}
