#include <stdio.h>
int main(){
    int i;
    long long int a, r, n;
    scanf("%lld %lld %lld",&a,&r,&n);
    for(i=1;i<n;i++){
        a = a*r;
    }
    printf("%lld",a);

    return 0;
}
