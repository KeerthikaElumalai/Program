#include<stdio.h>
#include<math.h>
int main(void)
{
int width,length,height;
int surfacearea,volume;
scanf("%d%d%d",&width,&length,&height);
surfacearea= 2*(width*length+length*height+height*width);
volume=width*length*height;
printf("%d %d",surfacearea,volume);
return 0;
}

