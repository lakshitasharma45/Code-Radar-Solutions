#include <stdio.h>
int main() {
    int a,b;char c;
    scanf("%d %d %c",&a,&b,&c);
    int sum=(a+b);
    int diff=(a-b);
    int product=(a*b);
    int div=(a/b);
    switch(c) {
        case '+' : printf("%f",sum);break;
        case '-' : printf("%f",diff);break;
        case '*' : printf("%f",product);break;
        case '/' : printf("%f",div);break;
        default : printf("error");break;
        }
        return  0;
} 