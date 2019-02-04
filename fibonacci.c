#include<stdio.h>
         int main(void)
         {
         int i,n,t1=1,t2=1, t3;
         scanf("%d",&n);
               for(i=1;i<=n;++i)
               {
               printf("%d\t",t1);
               t3=t1+t2;
               t1=t2;
               t2=t3;
               	
               }
               return 0;
               
         }

