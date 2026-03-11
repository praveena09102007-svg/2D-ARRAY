#include <stdio.h>

int main(){
    int r,c,i,j,k;
    int a[50][50];
    int count=0,flag;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){

        flag=1;

        for(j=0;j<c;j++){
            for(k=j+1;k<c;k++){

                if(a[i][j]==a[i][k]){
                    flag=0;
                }
            }
        }

        if(flag==1)
            count++;
    }

    printf("%d",count);
}