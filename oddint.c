#include<stdio.h>
int main(void)
{
   int num,n,m;
   scanf("%d%d", &m,&n);
   for (num = m; num <=n; num++)
   {
      if(num % 2 == 1)
         printf("%d ", num);
   }
   return 0;
}
        
   
