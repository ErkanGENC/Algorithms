#include <stdlib.h>
#include <stdio.h>

int factoriyel_rec(int );

int main()
{
	int sayi;
	
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	
	printf("%d faktoriyelinin sonucu: %d",sayi,factoriyel_rec(sayi));

}

int factoriyel_rec(int m)
{
	int factoriyel = 1;
	int i;
	
	for(i=1;i<=m;i++)
			factoriyel *= i;
			
			return factoriyel; 	
}	
