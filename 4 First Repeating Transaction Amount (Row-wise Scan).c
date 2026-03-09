#include <stdio.h>

int main()
{
    int r,c;
    int a[10][10];

    scanf("%d %d",&r,&c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(int k=i;k<r;k++)
            {
                for(int l=0;l<c;l++)
                {
                    if(i==k && j>=l)
                    continue;

                    if(a[i][j] == a[k][l])
                    {
                        printf("%d",a[i][j]);
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}