#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int max = -9999, second = -9999;

   
    scanf("%d %d", &r, &c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);

            if(a[i][j] > max)
            {
                second = max;
                max = a[i][j];
            }
            else if(a[i][j] > second && a[i][j] != max)
            {
                second = a[i][j];
            }
        }
    }

    printf("Second Highest Salary = %d", second);

    return 0;
}