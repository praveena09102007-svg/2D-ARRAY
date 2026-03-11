#include <stdio.h>

int main(){
    int r,c,i,j,k;
    int a[50][50];
    int count=0,prime;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){

            prime=1;

            if(a[i][j]<=1)
                prime=0;

            for(k=2;k<a[i][j];k++){
                if(a[i][j]%k==0){
                    prime=0;
                    break;
                }
            }

            if(prime==1)
                count++;
        }
    }

    printf("%d",count);
}