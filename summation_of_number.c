#include <stdio.h>

// Write a C functionusingrecursionthatcalculatesthesummationof a list of naturalnumbers. (Numbersaregreaterthan0)

// Non-Tail Recursion
int _summation(unsigned int num)
{
	if(num == 0)
	{
		return 0;
	}
	//pending operation adding num to the value returned by the recursive function
	return num + _summation(num-1); 
	
}

// Making it a Tail Recursion
int sum_all(unsigned int n)
{
	//making _summation the last function we call recursively, no pending operation
	return _summation(n);
}


int main()
{
	printf("%d", sum_all(5));
	
	return 0;	
}
