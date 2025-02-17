#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=2;i<=a;i++){
        if(a%i==0){
            printf("Prime");
        }
        else{printf("Not prime");}
    }
    return 0;
}