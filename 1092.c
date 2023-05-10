#include <stdio.h>
int main(){
    int day=1;
    long long int a, b, c;
    scanf("%lld %lld %lld",&a,&b,&c);
    while(day%a!=0||day%b!=0||day%c!=0){
        day++;
    }
    printf("%lld",day);

    return 0;
}

