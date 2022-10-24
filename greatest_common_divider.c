#include <stdio.h>

//  Write a C functionof a GreatestCommonDivider(GCD) byusingrecursion.

int greatest_common_divider(int number_1, int number_2)
{
    if (number_2 != 0)
        return greatest_common_divider(number_2, number_1 % number_2); // recursive calls until base condition = 0
    else
        return number_1;
}

int tail_gcd(int n, int n0)
{
	return greatest_common_divider(n, n0); // To make recursive call last thing 
}

int main()
{
	printf("%d", tail_gcd(15, 5)); // prints 5
	
	return 0;	
}
