#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void details(void)
{
	int i;
	int count =0;
	char pass[10],pak[10]="admin";
	printf("Enter the password to see details: ");
	scanf("%s",&pass);
	if (strcmp(pass,pak)==0)
	{
		for (i=0;i<count;i++)
		{
			printf("seat no: %d is booked by %s booking id is %d\n",person[i].seatnum,person[i].name,person[i].id);
		}
	}
	else
		printf("Entered password is wrong \n");
		system("PAUSE");
		system("CLS");
}