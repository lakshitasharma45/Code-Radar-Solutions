#include <stdio.h>
int main() {
    int a,b,c;
    printf("");
    scanf("%d %d %d",&a,&b,&c);
    if(a<(b+c) && b<(a+c) && c<(b+a)) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
    return 0;
}