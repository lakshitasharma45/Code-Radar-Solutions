#include <stdio.h>
int main(){
    int a;scanf("%d",&a);
    int i,j;
    for(i=0;i<a;i++){
        for(j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}