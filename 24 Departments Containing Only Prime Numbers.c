#include <stdio.h>

int prime(int n){
    int i;
    if(n<=1) return 0;

    for(i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int r,c,i,j,a[100][100];
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int count=0;

    for(i=0;i<r;i++){
        int flag=1;

        for(j=0;j<c;j++){
            if(!prime(a[i][j])){
                flag=0;
                break;
            }
        }

        if(flag==1)
            count++;
    }

    printf("%d",count);
}
