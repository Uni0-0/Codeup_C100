#include <stdio.h>
int main(){
    int i, n, t;
    int a[9999]={};
    scanf("%d",&n);
    for(i=1; i<=n ; i++){
        scanf("%d ",&a[i]);
    }
    for(i=n; i>=1; i--){
        printf("%d ",a[i]);
    }
    return 0;
}

