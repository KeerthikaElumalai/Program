#include<stdio.h>
int main(void)
{
int array[100], max, size, c, location = 1;
 scanf("%d", &size);
for (c = 0; c < size; c++)
 scanf("%d", &array[c]);
max = array[0];
for (c = 1; c < size; c++)
{
 if (array[c] > max)
 {
  max = array[c];
  location = c+1;
 }
}
printf("%d\n",max);
return 0;
}

