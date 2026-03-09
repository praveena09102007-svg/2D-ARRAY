#include <stdio.h>

int main()
{
    int r,c;
    int a[10][10];
    int maxProduct = -9999;

    scanf("%d %d",&r,&c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(int k=i+1;k<r;k++)
            {
                for(int l=0;l<c;l++)
                {
                    int product = a[i][j] * a[k][l];

                    if(product > maxProduct)
                    maxProduct = product;
                }
            }
        }
    }

    printf("%d",maxProduct);

    return 0;
}