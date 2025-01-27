#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i;
    int sum = 0;
    for(i=0;i<=a;i++){
        sum=sum+i;
        printf("%d",sum);
    }
    return 0;
}