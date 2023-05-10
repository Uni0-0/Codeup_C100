#include <stdio.h>
int main(){
    long long int w,h,b;
    double mb=0;
    scanf("%lld %lld %lld ",&w,&h,&b);
    mb = (double)(w*h*b)/(double)(8*1024*1024);
    printf("%.2lf MB",mb);
    return 0;
}

