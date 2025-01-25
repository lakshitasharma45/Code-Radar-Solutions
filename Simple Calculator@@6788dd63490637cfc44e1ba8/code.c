#include <stdio.h>
int main() {
    int a,b;char c;
    printf("");scanf("%d %d %c",&a,&b,&c);
    int sum=(a+b);
    int diff=(a-b);
    int product=(a*b);
    int div=(a/b);
    switch(c) {
        case '+':
            printf("%d\n",sum);
            break;
        case '-' :
            printf("%d\n",diff);
            break;
        case '*' :
            printf("%d\n",product);
            break;
        case '/' :
            printf("%d\n",div);
            break;
        default :
            printf("error\n");
            break;}
            return  0;
}
}    




}