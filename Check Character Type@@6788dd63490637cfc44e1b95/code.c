#include <stdio.h>
int main(){
    char ch;
    printf("");
    scanf("%c",&ch);
    if ((ch==a) ||(ch==e)||(ch==i)||(ch==o)||(ch==u)) {
        printf("Vowel");}
    else if(!((ch==a)||(ch==e)||(ch==i)||(ch==o)||(ch==u))) {
        printf("Consonant");}
    else if(ch==1,2,3,4,5,6,7,8,9) {
        printf("Digit");}
    else { printf("Special Character");}
    return 0;
}