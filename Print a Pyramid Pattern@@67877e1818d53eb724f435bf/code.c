#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0,i<=n-1,i++){
        for(j=0,j<=(2n-1),j++){
            if( ((i+j)==n)((i+j)>=(n+i)) && ((i+j)<=(n-i)) ) {printf("*");}
            else {printf(" ");}
            }
            printf("\n");
    }
    return 0;
}