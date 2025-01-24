#include <stdio.h>
int main(){
    int a=30,b=31,c=28;printf("");scanf("%d",&a);
    switch(a){
    case 1:{printf("%d",b);break;}case 2:{printf("%d",c);break;}
    case 3:{printf("%d",b);break;}case 4:{printf("%d",a);break;}
    case 5:{printf("%d",b);break;}case 6:{printf("%d",a);break;}
    case 7:{printf("%d",b);break;}case 8:{printf("%d",b);break;}
    case 9:{printf("%d",a);break;}case 10:{printf("%d",a);break;}
    case 11:{printf("%d",a);break;}case 12:{printf("%d",b);break;}
    default:{printf("Invalid month");}
    }
    return 0;
}