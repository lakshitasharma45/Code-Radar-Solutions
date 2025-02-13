#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<2*n;j++){
            if((j>=n-1-i) && (j<=n-1)){printf("%d ",i+1,j+1);
            }
            else{printf(" ");}
        }
        printf("\n");
    }
    return 0;
}