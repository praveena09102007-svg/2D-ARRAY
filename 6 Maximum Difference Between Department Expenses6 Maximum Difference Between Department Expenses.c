#include<stdio.h>

int main()
{
    int r,c,i,j;
    int a[10][10];
    int sum[10];
    int max=0,diff;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    {
        sum[i]=0;
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=i+1;j<r;j++)
        {
            diff=sum[i]-sum[j];
            if(diff<0)
            diff=-diff;

            if(diff>max)
            max=diff;
        }
    }

    printf("%d",max);

    return 0;
}