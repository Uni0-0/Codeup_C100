#include <stdio.h>
int main(){
    long long int h,b,c,s;
    double mb=0;
    scanf("%lld %lld %lld %lld",&h,&b,&c,&s);
    mb = (double)(h*b*c*s)/(double)(8*1024*1024);
    printf("%.1lf MB",mb);
    return 0;
}
