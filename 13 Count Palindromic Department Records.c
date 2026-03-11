#include <stdio.h>

int main(){
    int r,c,i,j;
    int a[50][50];
    int count=0,flag;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){
        flag=1;

        for(j=0;j<c/2;j++){
            if(a[i][j]!=a[i][c-1-j]){
                flag=0;
                break;
            }
        }

        if(flag==1)
            count++;
    }

    printf("%d",count);
}