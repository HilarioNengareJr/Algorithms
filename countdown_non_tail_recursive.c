#include <stdio.h>

//Write a C program thatwillask to enter an integer number from the user and will countdown until 0. At the end, it will print «Time is up!».

//Non-Tail Recursive
void countdown(unsigned int n){

	// Base condition
	if (n<=0){
		printf("\nTime Is Up!\n");
		return 0;
	}
	
	//Recursive condition
	countdown(n-1);
	printf("\n%d\n", n); //pending operation

		
} 


//Tail Recursive with an accummulated value
int countdown_tail_recursive(unsigned int n)
{
	unsigned int acc_val = n;
	
	if(acc_val==0)
	{
		printf("\nTime Is Up!\n");
		return 0;
	}	
	printf("\n%d\n", n);
	//Recursive condition
	return countdown_tail_recursive(n-1); 
	//no pending operation
	
}

int ctr(unsigned int n)
{
	return countdown_tail_recursive(n);	// makes countdown_tail_recursive() the last operation and therefore no pending operation
}

//Iterative
int countdown_b(unsigned int n){
	
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
	int x = number;
	
	printf("Enter a Number\t");
	scanf("%d", &number);
	
	printf("\nNon-Tail Recursive\n");
	countdown(number);
	
	printf("\nTail Recursive Result\n");
	printf(ctr(number));
 	
 	printf("\nIterative Result:\n");
 	printf(countdown_b(number));
	 
	return 0;	
}
