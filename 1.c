/* 1. Write a program to find the factorial of a number.
*/


#include<stdio.h>

long fact(long);

int main()
{
	int a;
	printf("Enter a number to find its factorial \n");
	scanf("%d",&a);
	printf("factorial of %d is %ld ",a,fact(a));
}

long fact(long n)
{
	
		if(n==0)                      // termination condition
			return 1;
		else
		return n*fact(n-1);          // n*( (n-1) * (n-2) * ..... so on till (n-n+1) ie... n = 1) 
}
