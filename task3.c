#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 
int middle (int a, int b)
{
	int mid = 1;
	
	mid = (a + b) / 2;
	
	return mid;
}
int main(void)
{
	int32_t a, b; 
	 
	scanf ("%d %d", &a, &b);
	
	printf ("%d ", middle(a, b));	
			
return 0;		
}
