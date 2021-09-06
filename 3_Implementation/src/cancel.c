#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void cancelticket(int *array)
{
      int Cseat,i,stop;
	  printf("Please enter ID number of ticket: ");
	  scanf("%d",&Cseat);
	  for (i=0;i<300;i++)
	  {
	  		if(Cseat==person[i].id)
	  		{
					 stop=5;
					 system("cls");
					 printf("%s your ticket is %d cancelled",person[i].name,person[i].seatnum);
					 array[person[i].seatnum]=0;
					 i=300;
	  		}
	  }
	  if (stop!=5)
	  		printf("Ticket ID number is incorrect please enter right one to cancel ticket: \n");
}