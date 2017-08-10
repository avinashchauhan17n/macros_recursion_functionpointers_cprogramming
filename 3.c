/*3. Print the first n Fibonacci numbers.
*/


#include<stdio.h>

int fibo(int);
int main()
{
	int a,i;
	printf("Enter a number to print nth fibonacci series\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)	
	printf("%d ",fibo(i));
}

int fibo(int n)
{

	if(n==1 || n==2)
	return 1;		
	
	else
	return fibo(n-1) + fibo(n-2);
	   
}

