#include <stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d",&a);
    if(!(a>=1)&&(a%2==0)) {printf("Not Prime");}
    else{printf("Prime");}
    return 0;
}