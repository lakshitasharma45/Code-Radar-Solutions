#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int i=0,sum=0;
    while(i<=a){
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}