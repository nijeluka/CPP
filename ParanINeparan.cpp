#include <stdio.h>

void main(){
 int broj;
    printf("Unesi neki broj\n");
    scanf("%d",&broj);
    //expression?if true:if false;

    printf(broj%2==0?"Broj je paran":"Broj je neparan");
}
