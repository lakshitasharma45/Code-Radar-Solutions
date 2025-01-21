#include <stdio.h>
int main() {
    char ch;
    isupper(ch)=%X;
    islower(ch)=%x;
    printf("");
    scanf("%c", &ch);
    if(isupper(ch)) {printf("Uppercase");}
    else if (islower(ch)) {printf("Lowercase");}
    else { printf("Not an alphabet")}
    return 0;
}