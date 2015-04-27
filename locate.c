#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t,a,pic[30][30],i,j,h[20],w[20],row[20],col[20],Sum;
    scanf("%d",&t);
    for(a=0;a<t;a++){
        scanf("%d %d",&h[a],&w[a]);
        for(i=0;i<h[a];i++){
            for(j=0;j<w[a];j++)
                scanf("%d",&pic[i][j]);
        }
        Sum=0;
        for(i=0;i<h[a];i++){
            for(j=0;j<w[a];j++){
                if(i+1<h[a]&&abs(pic[i][j]-pic[i+1][j])<=10){
                    if(pic[i][j]+pic[i+1][j]>sum){
                        Sum=pic[i][j]+pic[i+1][j];
                        row[a]=i+1;
                        col[a]=j+1;
                    }
                }
                if(j+1<w[a]&&abs(pic[i][j]-pic[i][j+1])<=10){
                    if(pic[i][j]+pic[i][j+1]>sum){
                        sum=pic[i][j]+pic[i][j+1];
                        row[a]=i+1;
                        col[a]=j+1;
                    }
                }
            }
        }
    }
    for(a=0;a<t;a++)
        printf("%d %d\n",row[a],col[a]);
    return 0;
}
