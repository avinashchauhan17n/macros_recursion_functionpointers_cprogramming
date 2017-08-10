/* 6. Write a program to find the power of a number( x to the power of n = x * x * x * x....n times) 
*/


#include<stdio.h>

long power(int,int);

int main()
{
	int a,b;
	printf("Enter a number and it power \n");
	scanf("%d %d",&a,&b);	printf(" pow(%d,%d) is %ld ",a,b, power(a,b) );
}

long power(int a,int b)
{

	if(b==0)
		return 1;
	else
	return power(a,b-1)*a;



}
