#include <stdio.h>
int main(){
    unsigned int a,b;
    double c;
    scanf("%u %u",&a, &b);
    printf("%u\n",a+b);
    printf("%u\n",a-b);    
    printf("%u\n",a*b);
    printf("%u\n",a/b);
    printf("%u\n",a%b);
    c=(float)a/(float)b;
    printf("%.2lf",c);
    return 0;
}

