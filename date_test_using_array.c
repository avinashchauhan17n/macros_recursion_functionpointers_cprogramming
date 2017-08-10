#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct date
{
        int day;
        int month;
        int year;
};

void add_date(int *, int *, int *,int);
void delete_date(int *, int *, int *,int);
bool isLeapYear(int year);
 
int main() 
{
	struct date dt; int n; 
	printf("enter a date in d/m/y format \n");
	scanf("%d/%d/%d",&dt.day,&dt.month,&dt.year);
	printf("Enter no of days to be added\n");
	scanf("%d",&n);
	add_date(&dt.day,&dt.month,&dt.year,n);
	printf("New date after addition of %d days : %d %d %d \n",n,dt.day,dt.month,dt.year);
}

void add_date(int *day, int *month, int *year,int daysToAdvance)
{		
    int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i;
 	   for (i=0;i<daysToAdvance;i++)
    	   {
        	*day++;

        		if (*day > daysPerMonth[*month-1])  // leap year condition not executed......
        		{
            			*day = 1;  
            			*month++;

            			if (*month==13)
            			{
                			*month = 1;
                			*year++;
            			}
        		}
    	  }
}

bool isLeapYear(int year)
{
    if (year%400==0) return true;
    if (year%100==0) return false;
    return (year%4==0);
}


