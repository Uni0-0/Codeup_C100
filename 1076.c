#include <stdio.h>
int main(){
    int n=97,c;
    scanf("%c",&c);
    do{
        printf("%c ",n);
        n++;
    }while(n!=c+1);
    return 0;
}

