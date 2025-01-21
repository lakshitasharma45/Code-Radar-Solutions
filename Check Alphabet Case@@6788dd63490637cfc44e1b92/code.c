#include <stdio.h>
int main() {
    char ch;
    printf("");
    scanf("%c", &ch);
    if(ch=="%X") {printf("Uppercase");}
    else if (ch=="%x") {printf("Lowercase");}
    else { printf("Not an alphabet")}
    return 0;
}