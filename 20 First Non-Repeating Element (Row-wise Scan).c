#include <stdio.h>

int main(){
    int r,c,i,j,k,l;
    int a[50][50];
    int count;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){

            count=0;

            for(k=0;k<r;k++)
                for(l=0;l<c;l++)
                    if(a[i][j]==a[k][l])
                        count++;

            if(count==1){
                printf("%d",a[i][j]);
                return 0;
            }
        }
    }
}