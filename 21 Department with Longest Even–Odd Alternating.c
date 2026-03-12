#include <stdio.h>

int main() {
    int r,c,i,j,a[100][100];
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int max=0,index=0;

    for(i=0;i<r;i++){
        int count=1;

        for(j=1;j<c;j++){
            if((a[i][j]%2==0 && a[i][j-1]%2!=0) || (a[i][j]%2!=0 && a[i][j-1]%2==0))
                count++;
        }

        if(count>max){
            max=count;
            index=i;
        }
    }

    printf("%d",index);
}
