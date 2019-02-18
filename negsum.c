#include<stdio.h>
int main()
{
    int total;
    int i;
      int negativeSum = 0;
          scanf("%d",&total);
      int numbers[total];
    for(i=0; i<total; i++)
    {
     printf(" ",(i+1));
     scanf("%d",&numbers[i]);
    }
    for(i=0 ; i<total ; i++)
    {
       if(numbers[i] < 0)
       {
         negativeSum += numbers[i];
       }
    }
     printf(" \n");
    for(i=0 ; i<total; i++)
    {
     }
     printf("\n %d\n",negativeSum);
}
