#include <stdio.h>
int main(){
    int ymd, id;
    scanf("%06d-%07d",&ymd,&id);
    printf("%06d%07d",ymd,id);
    return 0;
}
