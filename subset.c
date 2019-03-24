#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],count,i,j,b[m];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    {count=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
                count++;
        }
        if(count==0)
            break;
    }
    if(i==m)
        printf("YES");
    else
        printf("NO");

}
