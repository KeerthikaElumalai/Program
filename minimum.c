#include<stdio.h>
int main(void)
{
int array[100], min, size, c, location = 1;
 scanf("%d",&size);
for (c = 0; c < size; c++)
 scanf("%d",&array[c]);
min = array[0];
for (c = 1; c < size; c++)
{
 if(array[c] < min)
 {
  min = array[c];
  location = c+1;
  }
 }
 printf("%d",min);
 return 0;
}
