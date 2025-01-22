#include <stdio.h>
int main () {
    int c,s;
    printf("");
    scanf("%d %d",&c,&s);
    if (s>c) {printf("Profit");}
    else if(c>s) {printf("Loss");}
    else {printf("No Profit or Loss");}
    return 0;
}