/* 8. Implement string length function using recursion.
*/


#include<stdio.h>

int Strlen(char *s);

int main()
{
char str[200];
printf("Enter a string\n");
gets(str);
printf("L: %d\n",Strlen(str));
printf("%s\n",str);

}


int Strlen(char *s)
{
	char *p=s;
	static int length;

if(*p=='\0')
	return length;
else
{
	p++;length++;
	Strlen(p);
}

}
