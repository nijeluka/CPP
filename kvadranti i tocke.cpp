#include <stdio.h>
#include <math.h>

int main(){

    int x;
    int y;

    printf("X iznosi:\n");
    scanf("%d", &x);
    printf("y iznosi:\n");
    scanf("%d", &y);

    if (x>0 && y>0){
        printf("Nalazi se u prvom kvadrantu.\n");
    } else if (x<0 && y>0){
        printf("Nalazi se u drugom kvadrantu.\n");
    } else if (x<0 && y<0){
        printf("Nalazi se u trecem kvadrantu.\n");
    } else
        printf("Nalazi se u cetvrtom kvadrantu.\n");










}
