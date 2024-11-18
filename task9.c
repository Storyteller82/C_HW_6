#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 
int factorial (int n)
{
	int fact = 1;
	for (int i = 2; i <= n; i++)
	{
		fact = fact * i;
	}
	
	return fact;
}
int main(void)
{
	int32_t a; 
	 
	scanf ("%d", &a);
	
	printf ("%d ", factorial(a));	
			
return 0;		
}
