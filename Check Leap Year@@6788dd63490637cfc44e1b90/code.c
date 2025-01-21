#include <stdio.h>
int main() {
    int a;
    printf("");
    scanf("%d",&a);
    if ((a%4)  &&!(a%100) && (a%400))
     {printf("Leap Year");}
     return 0;
}