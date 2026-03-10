#include<stdio.h>

int main()
{
    int r,c,i,j;
    int a[10][10];
    int even,odd,count=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
        even=0;
        odd=0;

        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            even++;
            else
            odd++;
        }

        if(even==odd)
        count++;
    }

    printf("%d",count);

    return 0;
}