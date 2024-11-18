#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 
int summa (int a)
{
	int sum = 1;
	for (int i = 2; i <= a; i++)
	{
		sum = sum + i;
	}
	
	return sum;
}
int main(void)
{
	int32_t a; 
	 
	scanf ("%d", &a);
	
	printf ("%d ", summa(a));	
			
return 0;		
}
