#include<stdio.h>
int main(void)
{
 int num,k,temp,frequency[9],flag=0,i;
 scanf("%d",&num);
 temp=num;
 for(i=0;i<10;i++)
 {
     frequency[i]=0;
 }
 while(num>0)
 {
  k=num%10;
  frequency[k]++;
  num/=10;  
 }
 for(i=0;i<10;i++)
 {
  if(frequency[i]>1)
  {
   flag=1;
   printf("\n",i,frequency[i]);
  }
 }
 if(flag==0)
 {
  printf("no\n",num);
 }
 else
 {
  printf("yes\n",num);
 }
}
