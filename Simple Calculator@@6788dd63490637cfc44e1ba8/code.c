#include <stdio.h>
#include <math.h>
int main() {
    int a,b;char c;
    scanf("%d %d %c",&a,&b,&c);
    int sum=(a+b);
    int diff=(a-b);
    int product=(a*b);
    int div=(a/b);
    switch(c) {
        case '+':printf("%d",sum);break;
        case '-' :printf("%d",diff);break;
        case '*' :printf("%d",product);break;
        case '/' :printf("%d",div);break;
        default : printf("error");break;
        }
        return  0;
}
}    




}