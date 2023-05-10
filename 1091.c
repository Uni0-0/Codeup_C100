#include <stdio.h>
int main(){
    int i;
    long long int a, m, d, n;
    scanf("%lld %lld %lld %lld",&a,&m,&d,&n);
    for(i=1;i<n;i++){
        a = a*m+d;
    }
    printf("%lld",a);

    return 0;
}
