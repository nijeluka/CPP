#include <stdio.h>
#include <stdlib.h>
int nazivnik(n){
return n==1?1:n+nazivnik(--n)+1;

}
float nes(x,n){

return n==1?x:pow(x,n);

}

int main()
{
   int x;
   int n;
   float a;
   printf("unesi neki broj");
   scanf("%d",&x);
   printf("unesi neki broj");
   scanf("%d",&n);
    a=nes(x,n)/nazivnik(n);
    printf("%f",a);

}
