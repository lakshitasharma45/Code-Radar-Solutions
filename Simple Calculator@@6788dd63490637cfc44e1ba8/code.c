#include <stdio.h>
int main() {
    int a,b;char c;
    scanf("%d %d %c",&a,&b,&c);
    float sum=(a+b);
    float diff=(a-b);
    float product=(a*b);
    float div=(a/b);
    switch(c) {
        case '+' : printf("%d",sum);break;
        case '-' : printf("%d",diff);break;
        case '*' : printf("%d",product);break;
        case '/' : printf("%d",div);break;
        default : printf("error");break;
        }
        return  0;
} 