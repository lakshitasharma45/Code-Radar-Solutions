#include <stdio.h>
#include <math.h>
int main() {
    float a,b;
    printf("");
    scanf("%f %f",&a,&b);
    if(pow(a,b)==a) {printf("Yes");}
    else {printf("No");}
    return 0;
}