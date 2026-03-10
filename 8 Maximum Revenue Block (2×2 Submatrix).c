#include<stdio.h>

int main()
{
    int r,c,i,j;
    int a[10][10];
    int sum,max=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<r-1;i++)
    {
        for(j=0;j<c-1;j++)
        {
            sum = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];

            if(sum>max)
            max=sum;
        }
    }

    printf("%d",max);

    return 0;
}