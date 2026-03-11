#include <stdio.h>

int main(){
    int r,c,i,j,k,l;
    int a[50][50];
    int diff,max=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){

            for(k=0;k<r;k++){
                for(l=0;l<c;l++){

                    if(i!=k){
                        diff=a[i][j]-a[k][l];

                        if(diff<0)
                            diff=-diff;

                        if(diff>max)
                            max=diff;
                    }
                }
            }
        }
    }

    printf("%d",max);
}