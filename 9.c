/* 9. WAP to print Binary equivalent of an integer using recursion
*/

#include<stdio.h>

void bin(int,int);

int main()
{
	int a;
	printf("Enter a decimal number to find its binary \n");
	scanf("%d",&a);	
	bin(a,2);
}

void bin(int n,int base)
{

	int array[50]={0};
	static long i;
	int x;
	int temp;
	if(n==1)
	{
		array[i]=1;
			for(x=i;x>=0;x--)
			printf("%d ",array[x]);
		return;
	}

	else                                 
	{	

		temp=n%base;                    
		array[i]=temp;             
		n=n/base;
		i++;
		bin(n,base);		
	}

                                                      
}
						
