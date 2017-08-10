/*  4. Write a program to reverse a string.
*/

#include<stdio.h>
void rev(char *str,char *a,char *b);
int Strlen(char *s);
int main()
{
	char str[200];
	printf("Enter a string\n");
	gets(str);
	printf("Orig String : %s \n",str);
	char *p1,*p2;
	p1=str;
	p2=str+(Strlen(str)-1);
	rev(str,p1,p2);
	printf("After rev String : %s \n",str);
}

void rev(char *str, char *a , char*b)
{
	char temp;
	if((*a == *b) || (a > b))                     
	{
		*(str+Strlen(str))='\0';
		return ;
	}
	else
	{
	temp=*a;
	*a=*b;
	*b=temp;
	a++;b--;
	rev(str,a,b);
	}	

}

int Strlen(char *s)
{	
	int i,count=0;
	for(i=0;*(s+i)!='\0';i++)
	count++;

	return count;
}






















