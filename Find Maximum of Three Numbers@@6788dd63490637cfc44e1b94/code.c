#include <stdio.h>
int main() {
    int a,b,c;
    printf("");
    scanf("%d %d %d", &a,&b,&c);
    if ((a>b) && (a>c)) {printf("%d", a); }
    else if ((a<c) && (b<c)) {printf("%d", c);}
    else{printf("%d", b);}
    return 0;
}