/* 5. Print a string in reverse, using recursion, without actually modifying the string.
*/


#include<stdio.h>
#include<stdlib.h>
char *rev(char *str,char *b);
int Strlen(char *s);
char *buffer;
int main()
{
	char str[200];
	printf("Enter a string\n");
	gets(str);
	printf("Orig String : %s \n",str);

	buffer=(char *) malloc(Strlen(str)+1);
	char *p2;
	p2=str+(Strlen(str)-1);
	rev(str,p2);
	printf("After rev String : %s \n",str);
	printf("New buffer: %s\n",buffer);
}

char *rev(char *str, char*b)
{
	char temp;static int i=0;
	if(b<str)                    
	{	
		*(buffer+Strlen(str))='\0';
		return ;
	}
	else
	{
	*(buffer+i)=*b;
	i++;b--;
	rev(str,b);
	}	

}

int Strlen(char *s)
{	
	int i,count=0;
	for(i=0;*(s+i)!='\0';i++)
	count++;

	return count;
}



