#include <stdlib.h>
#include <stdio.h>

int ebob(int m,int n){
    // r = kalan
    int r = m%n;

    while(r!=0){
        m=n;
        n=r;
        
        r = m%n;
    }
        return n;

}

int ebob_Rec(int m,int n)
{
	int r = m%n;
	
	if(r == 0)
		return n;
			
	return ebob_Rec(n,r);	
}

int main()
{
	int k,b;
	
	printf("buyuk sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("kucuk sayiyi giriniz: ");
	scanf("%d",&k);
	
	printf("girilen sayilarin iterative ebob degeri: %d\n\n",ebob(b,k));
	printf("girilen sayilarin recursive ebob degeri: %d\n\n",ebob_Rec(b,k));
	
	
}
