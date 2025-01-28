#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    int a;
    scanf("%c" "%d",&ch,&a);
    if(isalpha(ch)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){printf("Vowel");}
        else{printf("Consonant");}}
    else if(isdigit(a)){printf("Digit");}
    else { printf("Special Character");}
    return 0;
}