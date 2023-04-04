#include <stdio.h>



int fibonacci(int adim)		// ORN; 0,1,1,2,3,5,8.....
{	
	int i,next,say1=0,say2=1;
	
	for(i=1;i<=adim;i++)
	{
		next = say1 + say2;
		say1 = say2;
		say2 = next;
	}
		return next;
}

int fibonacci_Rec(int adim)
{
	if(adim==0)
		return 0;
	else if(adim == 1)
		return 1;	
	else
		return fibonacci_Rec(adim-1) + fibonacci_Rec(adim-2);
}

int main()
{
	int adim;
	printf("kac adimli bir seri olsun ? ");
	scanf("%d",&adim);
	
	printf("girilen adim sayisindaki fibonacci serisinin degeri: %d\n\n",fibonacci(adim));
	printf("Girilen adim sayisindaki fibonacci serisinin degeri (recursive olarak) : %d\n",fibonacci_Rec(adim));
	return 0;
}
