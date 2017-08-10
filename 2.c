/*2. Write a program to find the nth Fibonacci number 
*/

#include<stdio.h>

int fibo(int);

int main()
{
	int a;
	printf("Enter a number to find its nth fibonacci element \n");
	scanf("%d",&a);	printf("fibonaci term of %d is %d ",a,fibo(a));
}

int fibo(int n)
{

	if(n==1 || n==2)
	return 1;
	
	else
	return fibo(n-1) + fibo(n-2) ;



}
