#include <stdlib.h>
#include <stdio.h>

int faktoriyel(int m){

    if(m==0)
        return 1;

    else
        return m*faktoriyel(m-1);
      
}

void  main(){

    int m;
    printf("lutfen bir sayi girin: ");
    scanf("%d",&m);

    printf("%d faktoriyelinin  sonucu: %d\n",m,faktoriyel(m));
    
}
