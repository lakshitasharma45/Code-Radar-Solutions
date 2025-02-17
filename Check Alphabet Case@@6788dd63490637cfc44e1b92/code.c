#include <stdio.h>
#include<ctype.h>
int main() {
    char ch;
    printf("");
    scanf("%c", &ch);
    if((ch>=99 && ch<=122)) {printf("Lowercase");}
    else if (ch>=65 && ch<=90) {printf("Uppercase");}
    else { printf("Not an alphabet");}
    return 0;
}