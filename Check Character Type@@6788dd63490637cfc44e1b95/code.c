#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("");
    scanf("%c",&ch);
    if (isVowel(char(ch))) {
        printf("Vowel");}
    else if (!(isVowel(char(ch)))) {
        printf("Consonant");}
    else if(ch==1,2,3,4,5,6,7,8,9) {
        printf("Digit");}
    else { printf("Special Character");}
    return 0;
}