/*Function to add_date, delete date , compare two dates  */
/* printf("New date after addition of %d days : %d %d %d \n",n,dt.day,dt.month,dt.year); */

#include<stdio.h>
#include<stdlib.h>
#define debug printf("break point achieved here");
struct date
{
        int day;
        int month;
        int year;
};

void add_date(int *, int *, int *,int);
void delete_date(int *, int *, int *,int);
int compare_date(struct date *, struct date *);
int main()
{
	struct date dt,dt1; int n,choice; 
	printf("enter a date in d/m/y format \n");
	scanf("%d/%d/%d",&dt.day,&dt.month,&dt.year);

        printf("Enter ur choice \n1 Addition\n2 Subtraction\n3 Compare two dates\n");
        scanf("%d",&choice);
	
	if(choice==1 || choice==2)
	{
		printf("Enter no of days to be added/subtracted\n");
		scanf("%d",&n);

		if(choice==1)
		{
			add_date(&dt.day,&dt.month,&dt.year,n);
			printf("New date after addition of %d days : %d %d %d \n",n,dt.day,dt.month,dt.year);
		}

		else if(choice==2)
		{
			delete_date(&dt.day,&dt.month,&dt.year,n);
			printf("New date after deletion of %d days : %d %d %d \n",n,dt.day,dt.month,dt.year);
		}
	}

	else if(choice==3)
	{
//		printf("Previous entered date:  %d %d %d \n",dt.day,dt.month,dt.year);
	        printf("Enter a New date in d/m/y format to be compared with Previous date\n");
		scanf("%d/%d/%d",&dt1.day,&dt1.month,&dt1.year);

		printf("Previous entered date:  %d %d %d \n",dt.day,dt.month,dt.year);
		printf("New entered date:  %d %d %d \n",dt1.day,dt1.month,dt1.year);

		if(compare_date(&dt1,&dt)==1)
		printf("New date: %d/%d/%d  is greater than previous date: %d/%d/%d",dt1.day,dt1.month,dt1.year,dt.day,dt.month,dt.year);
		else if(compare_date(&dt1,&dt)==-1)
		printf("New date: %d/%d/%d  is  lesser  than previous date: %d/%d/%d",dt1.day,dt1.month,dt1.year,dt.day,dt.month,dt.year);
	}
}

void  add_date(int *d,int *m,int *y,int days)
{
  int flag=0;
  int temp=0;       // temp is alloted value(days) based on different test case
 

  while(flag < days)      
  {
     (*d)++;

  	   	if( (*m) == 4 || (*m) == 6 || (*m) == 9 || (*m) == 11)    
      		{
           		temp=30;
      		}
     		else if( (*m) == 2)                                    
      		{
           			if( (*y) % 400 == 0 || ( (*y) % 100 != 0 && (*y) % 4 == 0 ))      
               				temp = 29;
           			else                                                              
               				temp = 28;
      		}
     		else                                                               
          	temp=31;

/*---------------above part defines value of temp in terms of days in months in all cases leap or normal-------------------------------*/


     		if( (*d) > temp)                  
      		{
          		(*m) ++;          
          		(*d) = 1;          
      		}

     		if( (*m) == 13)         
      		{
          		(*y) ++;
          		(*m) = 1;
      		}

     flag++;

 }  
 	 return;
}




void  delete_date(int *d,int *m,int *y,int days)
{
  int flag=0;
  int temp=0;

  while(flag < days)                                     
  {
       (*d)--;

                if( (*m) == 4 || (*m) == 6 || (*m) == 9 || (*m) == 11)
                {
                        temp=30;
                }
                else if( (*m) == 2)
                {
                                if( (*y) % 400 == 0 || ( (*y) % 100 != 0 && (*y) % 4 == 0 ))
                                        temp = 29;
                                else
                                        temp = 28;
                }
                else
                temp=31;


                if( (*d) < 1)
                {
                        (*m) --;
                        (*d) = temp;
                }

                if( (*m) == 0)
                {
                        (*y) --;
                        (*m) = 12;
                }

     flag++;

  }
 
	 return;
}

int compare_date(struct date *d1, struct date *d2)   // d1 new 
{
	if(d1->year > d2->year)  
		return 1;	
	else if(d1->year == d2->year) 
	{	
		if(d1->month > d2->month)
			return 1;
		else if(d1->month == d2->month)
		{	
			if(d1->day > d2->day)
				return 1;
			else
				return -1;
			
		}
 		else if(d1->month < d2-> month)
		{
			return -1;
		}
	}

	else 
	return -1;
}
