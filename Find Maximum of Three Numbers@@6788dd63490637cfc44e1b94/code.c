#include <stdio.h>
int main() {
    int a,b,c;
    printf("");
    scanf("%d %d %d", &a,&b,&c);
    if ((a>b) && (b>c)) {
        printf("%d", a);
    }
    else if ((a<b) && (b<c)) {
        printf("%d", c);
    }
    return 0;
}