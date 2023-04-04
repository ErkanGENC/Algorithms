#include <stdio.h>


// Iterative
int us_Alma(int a,int b)	// 2 uzeri 5 = 2.2.2.2.2
{
	int i,sonuc=1;
	
	while(b != 0)
	{
		for(i=1;i<=b;i++)
		{
			sonuc *= a;
		}	
			return sonuc;
	}
		return 1;
}

int us_Alma_Rec(int a,int b)
{
	if(b <= 0)
		return 1;
	return (a * us_Alma_Rec(a,b-1));	// ORN; 2 üzeri 5 = 2 * 2 üzeri 4'tur.
}

int main()
{
	int taban,us;
	
	while(1)
	{
		printf("sayinin taban degerini giriniz: ");
		scanf("%d",&taban);
	
		printf("sayinin us degerini giriniz: ");
		scanf("%d",&us);
	
		printf("girdiginiz ifadelerin ustel karsiligi (iterative olarak): %d\n\n",us_Alma(taban,us));
		printf("girdiginiz ifadelerin ustel karsiligi (recursive olarak): %d\n",us_Alma_Rec(taban,us));
	}
	
	return 0;
}
