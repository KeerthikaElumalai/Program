#include <stdio.h>
 
int main()
{
    int num1, num2, num3;
 
    printf("\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    //printf("%d\t %d\t %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d\n",num1);
        }
        else
        {
            printf("%d \n",num3);
        }
    }
    else if (num2 > num3)
        printf("%d \n",num2);
    else
        printf("%d \n",num3);

}
