#include <stdio.h>

int main() {
    int r,c,i,j,a[100][100];
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int count=0;

    for(i=0;i<r;i++){
        int flag=1;

        for(j=1;j<c;j++){
            if(a[i][j] <= a[i][j-1]){
                flag=0;
                break;
            }
        }

        if(flag==1)
            count++;
    }

    printf("%d",count);
}
