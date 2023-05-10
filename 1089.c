#include <stdio.h>
int main(){
    int i, sum=0;
    int a, d, n;
    scanf("%d %d %d",&a,&d,&n);
    sum = a;
    for(i=1;i<n;i++){
        sum = sum + d; 
    }
    printf("%d",sum);

    return 0;
}
