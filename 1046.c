#include <stdio.h>
int main(){
    unsigned int a,b,c;
    double d;
    scanf("%u %u %u",&a, &b, &c);
    printf("%u\n",a+b+c);
    d=(float)(a+b+c)/(float)3;
    printf("%.1lf\n",d);    

    return 0;
}

