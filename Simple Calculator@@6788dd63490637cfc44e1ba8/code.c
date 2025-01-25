#include <stdio.h>
#include <math.h>
int main() {
    int a,b;char ch;
    printf("");scanf("%d %d %c",&a,&b,&ch);
    switch(ch) {
        case '+': printf("%d",a+b);break;
        case '-' :printf("%d",a-b);break;
        case '*' :printf("%d",a*b);break;
        case '/' :printf("%d",a/b);break;
        default :printf("error");break;
    }
    return 0;
}    




}