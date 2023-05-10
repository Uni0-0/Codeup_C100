#include <stdio.h>
int main(){
    int i, n, sum=0;
    scanf("%d",&n);
    for(i=1; i<n+1 ; i++){
        sum = sum + i;
        if(sum >= n){
            break;
        }
    }
    printf("%d",sum);
    return 0;
}

