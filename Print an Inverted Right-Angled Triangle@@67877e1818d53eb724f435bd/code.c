#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i,j;
    for(i=0;i=a;i++){
        for(j=0;j=a-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}