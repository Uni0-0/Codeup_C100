#include <stdio.h>

int main(){
    int i,j;
    int x=2, y=2;
    int a[11][11]={};
    
    for(i=1; i<=10 ; i++){
        for(j=1; j<=10; j++){
            scanf("%d ",&a[i][j]);
        }
    }
    
    //막대의 개수
    

    for(i=x; i<=10 ; i++){
        for(j=y; j<=10;j++){
            if(a[i][j]==0){
                a[i][j]=9;
            }
            if(a[i][j]==2){
                a[i][j]=9;
                goto stop;
            }
            if(a[i][j+1]==1){
                y=j;
                break;
            }
        }
    }
    
    stop:
    
    for(i=1; i<=10 ; i++){
        for(j=1; j<=10; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
