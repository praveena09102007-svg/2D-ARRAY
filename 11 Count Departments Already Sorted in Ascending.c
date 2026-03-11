#include <stdio.h>

int main() {
    int r,c,i,j;
    int a[50][50];
    int count=0, sorted;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){
        sorted=1;

        for(j=0;j<c-1;j++){
            if(a[i][j] > a[i][j+1]){
                sorted=0;
                break;
            }
        }

        if(sorted==1)
            count++;
    }

    printf("%d",count);
}