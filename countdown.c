#include <stdio.h>

//Write a C program that will ask to enter an integer number from the user and will countdown until 0. At the end, it will print «Time is up!».

//Recursive
int countdown(int n){

	// Base condition
	if (n<=0){
		printf("\nTime Is Up!\n");
		return 0;
	}
	printf("\n%d\n", n);
	//Recursive condition
	return countdown(n-1);
		
} 

//Iterative
int countdown_b(int n){
	
	int i;
	
	for(i=n;i>0;i--)
	{
		printf("\n%d%\n",i);
	}
	printf("\nTime Is Up!\n");
	return 0;
}

int main()
{
	int number;
	printf("Enter a Number\t");
	scanf("%d", &number);
	
	printf("\nRecursive Result\n");
	printf(countdown(number));
 	
 	printf("\nIterative Result:\n");
 	printf(countdown_b(number));
	 
	return 0;	
}
