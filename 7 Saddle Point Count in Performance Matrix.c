#include<stdio.h>

int main()
{
    int r,c,i,j,k;
    int a[10][10];
    int min,max,count=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            min=1;

            for(k=0;k<c;k++)
            if(a[i][j]>a[i][k])
            min=0;

            max=1;

            for(k=0;k<r;k++)
            if(a[i][j]<a[k][j])
            max=0;

            if(min && max)
            count++;
        }
    }

    printf("%d",count);

    return 0;
}