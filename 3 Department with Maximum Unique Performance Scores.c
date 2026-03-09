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

    int maxUnique = 0;
    int index = 0;

    for(int i=0;i<r;i++)
    {
        int unique = 0;

        for(int j=0;j<c;j++)
        {
            int count = 0;

            for(int k=0;k<c;k++)
            {
                if(a[i][j] == a[i][k])
                count++;
            }

            if(count == 1)
            unique++;
        }

        if(unique > maxUnique)
        {
            maxUnique = unique;
            index = i;
        }
    }

    printf(" %d",index);

    return 0;
}