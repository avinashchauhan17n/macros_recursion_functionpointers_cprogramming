/* 7. Write a program to count the number of digits in a number.
*/

#include<stdio.h>

int count(int);

int main()
{	int number;
	printf("enter a number\n");
	scanf("%d",&number);
	printf("digits is:  %d\n",count(number));
	


}

int count(int number)
{
	static c;
	if(number==0)
		return c;

	else
	{
	c++;
	count(number/10);
	}
}
