#include <stdio.h>
#include <math.h>
        // a+b=c
        // c+a=b
        // c+b=a
        //Krivo zadani brojevi


int main(){

    int a;
    int b;
    int c;

    printf("Unesi broj a:\n");
    scanf("%d", &a);

    printf("Unesi broj b:\n");
    scanf("%d", &b);

    printf("Unesi broj c:\n");
    scanf("%d", &c);

    if (a+b==c){
        printf("Tocno! %d + %d = %d", a,b,c);
    } else if (c+a==b){
        printf("Tocno! %d + %d = %d", c,a,b);
    } else if (c+b==a){
        printf("Tocno! %d + %d = %d", c,b,a);
    } else
        prin
