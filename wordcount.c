#include<stdio.h>
int main(void)
{
    char s[200];
    int count = 0,i;
    printf("\n");
    scanf("%[^\n]s",s);
    for (i=0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;
    }
    printf("%d\n",count + 1);
}
