#include<stdio.h>
int main(void)
{
int No= -1;
while(1)
{
scanf("%d",&No);
if(No<=1 || No>=10)
{
 printf("no");
 break;
}
else
{
printf("yes");
 break;
}
}
}
