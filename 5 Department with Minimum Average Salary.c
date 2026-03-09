#include <stdio.h>

int main()
{
    int r,c;
    int a[10][10];

    scanf("%d %d",&r,&c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int minIndex = 0;
    int minSum = 999999;

    for(int i=0;i<r;i++)
    {
        int sum = 0;

        for(int j=0;j<c;j++)
        {
            sum = sum + a[i][j];
        }

        if(sum < minSum)
        {
            minSum = sum;
            minIndex = i;
        }
    }

    printf("%d\n",minIndex);

    return 0;
}