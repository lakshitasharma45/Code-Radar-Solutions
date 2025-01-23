#include <stdio.h>
int main(){
    int a;
    printf("");
    scsnf("%d",&a);
    if((a<=100)&&(a>=1)) {printf("In Range");}
    else{printf("Out of Range");}
    return 0;
}