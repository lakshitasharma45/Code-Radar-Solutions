#include <stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d",&a);
    if((a>1)&&((a%1==0)&&(a%a==0))) {printf("Prime");}
    else if ((a<=1)&&(a%2==0)){printf("Not Prime");}
    return 0;
}