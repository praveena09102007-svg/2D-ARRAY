#include <stdio.h>

int main(){
    int r,c,i,j;
    int a[50][50];
    int sum,max=0,index=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(j=0;j<c;j++){
        sum=0;

        for(i=0;i<r;i++)
            sum+=a[i][j];

        if(sum>max){
            max=sum;
            index=j;
        }
    }

    printf("%d",index);
}