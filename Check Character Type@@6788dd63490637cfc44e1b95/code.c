#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("");
    scanf("%c",&ch);
    if (isVowel(char ch)) {
        printf("Vowel");}
    else if (!(isVowel(char ch))) {
        printf("Consonant");}
    else if((ch>='1')&&(ch<'0')) {
        printf("Digit");}
    else { printf("Special Character");}
    return 0;
}