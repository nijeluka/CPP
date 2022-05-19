#include <stdio.h>
#include <stdlib.h>

int main()
{
    int promjena=1;
    int i;
    int temp;
    int a[5];
    for(i=0;i<5;i++){
        printf("Unesi broj\n");
        scanf("%d", &a[i]);
    }while(promjena){
        promjena=0;
    for(i=0;i<4;i++){
        if(a[i]>a[i+1]){
        promjena=1;
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
        }
    }

  for(i=0;i<5;i++){
printf("%d\n", a[i]);


  }
  printf("3 broj je %d" ,a[3]);
    return 0;
}
