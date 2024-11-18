#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 
int power (int n, int p)
{
	int pwr = 1;
	if (p == 0)
	{
		n = 1;
		return n;
	}
	for (int i = 1; i <= p; i++)
	{
		pwr = pwr * n;
	}
	return pwr;
}
int main(void)
{
	int32_t a, b; 
	 
	scanf ("%d %d", &a, &b);
	
	//printf ("%d ", b);
	
	printf ("%d ", power(a, b));	
			
return 0;		
}
