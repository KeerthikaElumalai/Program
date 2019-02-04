#include<stdio.h>
#include<string.h>
int main(void)
{
char str[100];
int i = 0, l =0, f=1;
gets(str);
for(i=0; str[i] !='\0'; i++)
{
l = l +1;
}
printf("%d\n",l);
}
