#include <stdio.h>

//  Write a C function that will compute x^n by using recursion.

int power_of(int e, int n)
{
	
	if(n==0) 
		return 1; //base case
		
   	return e*power_of(e, --n); //general case
}

//tail function so that we pop off stack at the end
int power_tail(int exp, int number)
{
	return power_of(exp , number); // we have wrapped our main recursive function
}

int main()
{
	printf("%d", power_tail(2, 2));
	
	return 0;	
}
