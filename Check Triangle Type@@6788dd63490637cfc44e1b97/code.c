#include <stdio.h>
int main() {
    int a,b,c;
    printf("");
    scanf("%d %d %d",&a,&b,&c);
    if((a==b)&&(b==c)) { printf("Equilateral");}
    else if((a==b)||(b==c)||(c==a)) {printf("Isoceles");}
    else{printf("Scalene");}
    return 0;
}