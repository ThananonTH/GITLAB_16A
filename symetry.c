#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,one,lastone,i,j,house[30],width[30]={0},x;
    scanf("%d",&m);
    for(j=0;j<m;j++){
        house[j]=-1;
        scanf("%d",&n);
        one=1;
        lastone=-1;
        for(i=0;i<=n;i++){
            if(i<n) scanf("%d",&x);
            else x=1;
            one+=x;
            if(one==1&&x==1) lastone=i;
            else if(one==2){
                if((i-lastone)%2==0){
                    if(i-lastone>width[j]){
                        house[j]=(i+lastone)/2;
                        width[j]=i-lastone;
                    }
                }
                lastone=i;
                one--;
            }
        }
    }
    for(j=0;j<m;j++){
        printf("%d\n",house[j]);
    }
    return 0;
}
