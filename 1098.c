#include <stdio.h>

int main(){
    int h, w;
    int n;
    int l, d, x, y;
    int i, j;
    int a[101][101]={};
    
    scanf("%d %d",&h, &w);
    
    //막대의 개수
    scanf("%d",&n);

    for(i=1; i<=n ; i++){
        scanf("%d %d %d %d", &l, &d, &x, &y);
        
        if(d==1){
            for(j=0;j<l;j++){
                if(a[x+j][y]==0){
                    a[x+j][y]=1;
                }else{
                    a[j+j][y]=0;
                }
            }
        }else{
            for(j=0;j<l;j++){
                if(a[x][y+j]==0){
                    a[x][y+j]=1;
                }else{
                    a[x][y+j]=0;
                }
            }
        }
    }
    
    for(i=1; i<=h ; i++){
        for(j=1; j<=w; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

