#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include"SUGGESTION.h"
#include"QUERY.h"

struct customer
{
	char name[50];
	int age;
	char date[50];
	struct tour_data
	{
		int budget;
		int package;
	    int members;
		char month[50];
		char country[50];
		char flight[50];
	}tour;
}data;

void budget_month( struct customer data );
void print_data(struct customer data);


#include"UAE.h"
#include"FRANCE.h"
#include"SPAIN.h"
#include"PAKISTAN.h"
#include"TURKEY.h"
#include"USA.h"
#include"UK.h"
#include"ITALY.h"
#include"AUSTRALIA.h"
#include"CANADA.h"
#include"HONGKONG.h"
#include"GERMANY.h"

void loader()
{
	int i;
	
	system("cls");
	
	printf("Please wait while loading....\n");
	
	for(i=0;i<2;i++)
	{
		sleep(5);
	}
}

#include"UAEPack.h"
#include"USAPack.h"
#include"UKPack.h"
#include"AusPack.h"
#include"GerPack.h"
#include"CanPack.h"
#include"PakPack.h"
#include"TurPack.h"
#include"ItPack.h"
#include"SpaPack.h"
#include"HongPack.h"
#include"FranPack.h"

int main()	
{
	
	char id[20] ;
	char pass[20] ;
	
	system("color f5");
	
	printf("\n\t\t\tEnter the Username : ");
	gets(id);
	
	printf("\n\t\t\tEnter the Password : ");
	gets(pass);
	
	loader();
	
	if( strcmp( id , "project" ) == 0 )
	{
		if( strcmp( pass , "password" ) == 0 )
		{
			printf("\n\t\t\tLogin successful..............!\n");
		}
		else
		{
			printf("\n\t\t\tWrong Password......!\n");
			exit(1);
		}
	}
	else
	{
		printf("\n\t\t\tUser doesn't exist..............!\n");
		exit(1);
	}
	printf("\nPress any key to continue............!");
	getch();
	
	system("cls");
	system("color f2");
	
	FILE *ptr_f;
	char ch;
	
	ptr_f = fopen("Instruction.txt","r");
	
	if (ptr_f==NULL)
	{
		printf("\nError in fetching file .");
		exit(1);
	}
	
	while(1)
	{
		ch = fgetc(ptr_f);
		
		if (ch==EOF)
		break;
		printf ( "%c", ch );
	}
	
	fclose(ptr_f);
	
	printf("\n\n\n\n\n\n\n\n\nPress any key to continue : ");
	getch();
	system("cls");
	
	struct customer *ptr = NULL;
	
	ptr = &data;

	
	system("cls");
	system("color f1");
	
	printf("\n\n PROVIDE PERSONAL DATA  \n\n");
	
	printf("\n\t\t\tNAME : ");
	gets(ptr->name);
	
	printf("\n\t\t\t AGE : ");
	scanf("%d", &ptr->age );
	if(ptr->age<18)
	{
		printf("You are underage you can't appeal for tour....!");
		exit(1);
	}
	
	printf("\n\t\tCURRENT DATE : ");
	fflush(stdin);
	gets(ptr->date);
	
	system("cls");
	
	printf("\n\n PROVIDE TOUR DATA  \n\n");
	
	printf("\n\tTOTAL BUDGET PER PERSON : $");
	scanf("%d", &ptr->tour.budget );
	
	printf("\n\tENTER TOTAL MEMBERS : ");
	scanf("%d", &ptr->tour.members);
	
	printf("\n\tSUITABLE MONTH : ");
	fflush(stdin);
	gets( ptr->tour.month );
	
	int q;
	printf("\n\tENTER 1 TO ENTER YOU OWN CHOICE OF COUNTRY...! \n\tELSE ENTER 2 TO SEE COUNTRIES NAME BY YOUR BUDGET AND MONTH....!  ");
	scanf("%d",&q);
	
	if( q == 1 )
	{
		printf("\n\tENTER COUNTRY NAME : ");
		fflush(stdin);
	    gets( ptr->tour.country );
	    print_data(data);
	}
	
	else if ( q == 2 )
	budget_month(data);	
	
}

void budget_month( struct customer data )
{
	int num;
	
	if ( strcmp(data.tour.month,"january") == 0 || strcmp(data.tour.month,"January") == 0 )                   /*For month January*/
	{
		if ( data.tour.budget >= 8280  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)UAE \n\n2)Hong Kong \n\n3)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			UAE();
			
			else if(num==2)
			hong_kong();
			
			else if (num==3)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
			
		}
		
		else if ( data.tour.budget >= 4170 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Hong Kong \n\n2)Proceed\n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			hong_kong();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
			
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"february") == 0 || strcmp(data.tour.month,"February") == 0 )              /*For month February*/
	{
		if ( data.tour.budget >= 8280  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)UAE \n\n2)Hong Kong \n\n3)Proceed\n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			UAE(data);
			
			else if(num==2)
			hong_kong();
			
			else if(num==3)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4170 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Hong Kong \n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			hong_kong();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"march") == 0 || strcmp(data.tour.month,"March") == 0 )                 /*For month March*/
	{
		if ( data.tour.budget >= 1200  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Spain \n\n2)Proceed \n");
			printf("Press corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			spain();
			
			else if (num==2)
			goto jump ;  
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"april") == 0 || strcmp(data.tour.month,"April") == 0 )                /*For month April*/
	{
		if ( data.tour.budget >= 4850  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)France \n\n2)United Kingdom \n\n3)Italy \n\n4)Australia \n\n5)Spain \n\n6)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			france();
			
			else if (num==2)
			UK();
			
			else if (num==3)
			italy();
			
			else if (num==4)
			australia();
			
			else if (num ==5)
			spain();
			
			else if (num==6)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4530 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)United Kingdom \n\n2)Italy \n\n3)Australia \n\n4)Spain \n\n5)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			UK();
			
			else if (num==2)
			italy();
			
			else if (num==3)
			australia();
			
			else if (num==4)
			spain();
			
			else if(num==5)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4100 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Italy \n\n2)Australia \n\n3)Spain \n\n4)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			italy();
			
			else if (num==2)
			australia();
			
			else if (num==3)
			spain();
			
			else if(num==4)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 3840 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Australia \n\n2)Spain \n\n3)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			australia();
			
			else if (num==2)
			spain();
			
			else if(num==3)
			goto jump ;
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1200 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Spain \n\n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			spain();
			
			else if (num==2)
			goto jump ;
	
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"may") == 0 || strcmp(data.tour.month,"May") == 0 )              /*For month May*/
	{
		if ( data.tour.budget >= 6720  )
		{ 
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)USA \n\n2)France \n\n3)United Kingdom \n\n4)Italy \n\n5)Australia \n\n6)Germany \n\n7)Pakistan \n\n8)Spain \n\n9)Turkey \n\n10)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			USA();
			
			else if (num==2)
			france();
			
			else if (num==3)
			UK();
			
			else if (num==4)
			italy();
			
			else if (num==5)
			australia();
			
			else if (num==6)
			germany();
		
			else if (num==7)
			pakistan();
			
			else if (num==8)
			spain();
			
			else if (num==9)
			turkey();
			
			else if (num==10)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
			
		}
		
		else if ( data.tour.budget >= 4850 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)France \n\n2)United Kingdom \n\n3)Italy \n\n4)Australia \n\n5)Germany \n\n6)Pakistan \n\n7)Spain \n\n8)Turkey \n\n9)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			france();
			
			else if (num==2)
			UK();
			
			else if (num==3)
			italy();
			
			else if (num==4)
			australia();
			
			else if (num==5)
			germany();
		
			else if (num==6)
			pakistan();
			
			else if (num==7)
			spain();
			
			else if (num==8)
			turkey();
			
			else if (num==9)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4530 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)United Kingdom \n\n2)Italy \n\n3)Australia \n\n4)Germany \n\n5)Pakistan \n\n6)Spain \n\n7)Turkey \n\n8)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			UK();
			
			else if (num==2)
			italy();
			
			else if (num==3)
			australia();
			
			else if (num==4)
			germany();
		
			else if (num==5)
			pakistan();
			
			else if (num==6)
			spain();
			
			else if (num==7)
			turkey();
			
			else if (num==8)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4080 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Italy \n\n2)Australia \n\n3)Germany \n\n4)Pakistan \n\n5)Spain \n\n6)Turkey \n\n7)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			italy();
			
			else if (num==2)
			australia();
			
			else if (num==3)
			germany();
		
			else if (num==4)
			pakistan();
			
			else if (num==5)
			spain();
			
			else if (num==6)
			turkey();
			
			else if (num==7)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 3840 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Australia \n\n2)Germany \n\n3)Pakistan \n\n4)Spain \n\n5)Turkey \n\n6)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			australia();
			
			else if (num==2)
			germany();
		
			else if (num==3)
			pakistan();
			
			else if (num==4)
			spain();
			
			else if (num==5)
			turkey();
			
			else if (num==6)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 3480 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Germany \n\n2)Pakistan \n\n3)Spain \n\n4)Turkey \n\n5)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			germany();
		
			else if (num==2)
			pakistan();
			
			else if (num==3)
			spain();
			
			else if (num==4)
			turkey();
			
			else if (num==5)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1890 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Pakistan \n\n2)Spain \n\n3)Turkey \n\n4)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
		
			if (num==1)
			pakistan();
			
			else if (num==2)
			spain();
			
			else if (num==3)
			turkey();
			
			else if (num==4)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1200 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Spain \n\n2)Turkey \n\n3)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			spain();
			
			else if (num==2)
			turkey();
			
			else if (num==3)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 840 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Turkey \n\n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			turkey();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"june") == 0 || strcmp(data.tour.month,"June") == 0 )              /*For month June*/
	{
		if ( data.tour.budget >= 6720  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)USA \n\n2)France \n\n3)Italy \n\n4)Australia \n\n5)Pakistan \n\n6)Turkey \n\n7)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			USA();
			
			else if (num==2)
			france();
			
			else if (num==3)
			italy();
			
			else if (num==4)
			australia();
			
			else if (num==5)
			pakistan();
			
			else if (num==6)
			turkey();
			
			else if (num==7)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4850 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)France \n\n2)Italy \n\n3)Australia \n\n4)Pakistan \n\n5)Turkey \n\n6)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			france();
			
			else if (num==2)
			italy();
			
			else if (num==3)
			australia();
			
			else if (num==4)
			pakistan();
			
			else if (num==5)
			turkey();
			
			else if (num==6)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4080 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Italy \n\n2)Australia \n\n3)Pakistan \n\n4)Turkey \n\n5)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			italy();
			
			else if (num==2)
			australia();
			
			else if (num==3)
			pakistan();
			
			else if (num==4)
			turkey();
			
			else if (num==5)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 3840 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Australia \n\n2)Pakistan \n\n3)Turkey \n\n4)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			australia();
			
			else if (num==2)
			pakistan();
			
			else if (num==3)
			turkey();
			
			else if (num==4)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1890 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Pakistan \n\n2)Turkey \n\n3)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			pakistan();
			
			else if (num==2)
			turkey();
			
			else if (num==3)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 840 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Turkey \n\n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			turkey();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"july") == 0 || strcmp(data.tour.month,"July") == 0 )              /*For month July*/
	{
		if ( data.tour.budget >= 6720  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)USA \n\n2)Australia \n\n3)Pakistan \n\n4)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			USA();
			
			else if (num==2)
			australia();
			
			else if (num==3)
			pakistan();
			
			else if (num==4)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 3840 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Australia \n\n2)Pakistan \n\n3)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			australia();
			
			else if (num==2)
			pakistan();
			
			else if (num==3)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1890 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Pakistan \n\n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			pakistan();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"august") == 0 || strcmp(data.tour.month,"August") == 0 )              /*For month August*/
	{
		if ( data.tour.budget >= 6720  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)USA \n\n2)Australia \n\n3)Pakistan \n\n4)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			USA();
			
			else if (num==2)
			australia();
			
			else if (num==3)
			pakistan();
			
			else if (num==4)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 3840 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Australia \n\n2)Pakistan \n\n3)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			australia();
			
			else if (num==2)
			pakistan();
			
			else if (num==3)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1890 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Pakistan \n\n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			pakistan();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"september") == 0 || strcmp(data.tour.month,"September") == 0 )              /*For month September*/
	{
		if ( data.tour.budget >= 6720  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)USA \n\n2)France \n\n3)United Kingdom \n\n4)Italy \n\n5)Canada \n\n6)Pakistan \n\n7)Spain \n\n8)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			USA();
			
			else if (num==2)
			france();
			
			else if (num==3)
			UK();
			
			else if (num==4)
			italy();
			
			else if (num==5)
			canada();
			
			else if (num==6)
			pakistan();
			
			else if (num==7)
			spain();
			
			else if (num==8)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
			
		}
		
		else if ( data.tour.budget >= 4850 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)France \n\n2)United Kingdom \n\n3)Italy \n\n4)Canada \n\n5)Pakistan \n\n6)Spain \n\n7)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			france();
			
			else if (num==2)
			UK();
			
			else if (num==3)
			italy();
			
			else if (num==4)
			canada();
			
			else if (num==5)
			pakistan();
			
			else if (num==6)
			spain();
			
			else if (num==7)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4530 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)United Kingdom \n\n2)Italy \n\n3)Canada \n\n4)Pakistan \n\n5)Spain \n\n6)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			UK();
			
			else if (num==2)
			italy();
			
			else if (num==3)
			canada();
			
			else if (num==4)
			pakistan();
			
			else if (num==5)
			spain();
			
			else if (num==6)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4080 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Italy \n\n2)Canada \n\n3)Pakistan \n\n4)Spain \n\n5)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			italy();
			
			else if (num==2)
			canada();
			
			else if (num==3)
			pakistan();
			
			else if (num==4)
			spain();
			
			else if (num==5)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4050 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Canada \n\n2)Pakistan \n\n3)Spain \n\n4)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			canada();
			
			else if (num==2)
			pakistan();
			
			else if (num==3)
			spain();
			
			else if (num==4)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1890 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Pakistan \n\n2)Spain \n\n3)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			pakistan();
			
			else if (num==2)
			spain();
			
			else if (num==3)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1200 )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Spain \n\n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			spain();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"october") == 0 || strcmp(data.tour.month,"October") == 0 )              /*For month October*/
	{
		if ( data.tour.budget >= 8280  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)United Arab Emirates \n\n2)France \n\n3)United Kingdom \n\n4)Hong Kong \n\n5)Italy \n\n6)Canada \n\n7)Pakistan \n\n8)Spain \n\n9)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			UAE();
			
			else if (num==2)
			france();
			
			else if (num==3)
			UK();
			
			else if (num==4)
			hong_kong();
			
			else if (num==5)
			italy();
				
			else if (num==6)
			canada();
			
			else if (num==7)
			pakistan();
			
			else if (num==8)
			spain();
			
			else if (num==9)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4850  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)France \n\n2)United Kingdom \n\n3)Hong Kong \n\n4)Italy \n\n5)Canada \n\n6)Pakistan \n\n7)Spain \n\n8)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			france();
			
			else if (num==2)
			UK();
			
			else if (num==3)
			hong_kong();
			
			else if (num==4)
			italy();
				
			else if (num==5)
			canada();
			
			else if (num==6)
			pakistan();
			
			else if (num==7)
			spain();
			
			else if (num==8)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4530  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)United Kingdom \n\n2)Hong Kong \n\n3)Italy \n\n4)Canada \n\n5)Pakistan \n\n6)Spain \n\n7)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			UK();
			
			else if (num==2)
			hong_kong();
			
			else if (num==3)
			italy();
				
			else if (num==4)
			canada();
			
			else if (num==5)
			pakistan();
			
			else if (num==6)
			spain();
			
			else if (num==7)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4170  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Hong Kong \n\n2)Italy \n\n3)Canada \n\n4)Pakistan \n\n5)Spain \n\n6)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			hong_kong();
			
			else if (num==2)
			italy();
				
			else if (num==3)
			canada();
			
			else if (num==4)
			pakistan();
			
			else if (num==5)
			spain();
			
			else if (num==6)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4080  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Italy \n\n2)Canada \n\n3)Pakistan \n\n4)Spain \n\n5)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			italy();
				
			else if (num==2)
			canada();
			
			else if (num==3)
			pakistan();
			
			else if (num==4)
			spain();
			
			else if (num==5)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4050  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Canada \n\n2)Pakistan \n\n3)Spain \n\n4)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			canada();
			
			else if (num==2)
			pakistan();
			
			else if (num==3)
			spain();
			
			else if (num==4)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1890  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Pakistan \n\n2)Spain \n\n3)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			pakistan();
			
			else if (num==2)
			spain();
			
			else if (num==3)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1200  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Spain \n\n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			spain();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"november") == 0 || strcmp(data.tour.month,"November") == 0 )              /*For month November*/
	{
		if ( data.tour.budget >= 4850  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)France \n\n2)United Kingdom \n\n3)Hong Kong \n\n4)Canada \n\n5)Spain \n\n6)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			france();
			
			else if (num==2)
			UK();
				
			else if (num==3)
			hong_kong();
			
			else if (num==4)
			canada();
			
			else if (num==5)
			spain();
			
			else if (num==6)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4530  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)United Kingdom \n\n2)Hong Kong \n\n3)Canada \n\n4)Spain \n\n5)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");

			if (num==1)
			UK();
				
			else if (num==2)
			hong_kong();
			
			else if (num==3)
			canada();
			
			else if (num==4)
			spain();
			
			else if (num==5)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4170  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Hong Kong \n\n2)Canada \n\n3)Spain \n\n4)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			hong_kong();
			
			else if (num==2)
			canada();
			
			else if (num==3)
			spain();
			
			else if (num==4)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 4050  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Canada \n\n2)Spain \n\n3)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			canada();
			
			else if (num==2)
			spain();
			
			else if (num==3)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else if ( data.tour.budget >= 1200  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)Spain \n\n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			spain();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else if ( strcmp(data.tour.month,"december") == 0 || strcmp(data.tour.month,"December") == 0 )              /*For month December*/
	{
		if ( data.tour.budget >= 8280  )
		{
			printf("\n\nCountries according to your Budget and month :\n");
			printf("\n1)United Arab emirates \n\n2)Proceed \n");
			printf("\nPress corresponding number to view brief information of country : ");
			scanf("%d",&num);
			
			system("cls");
			
			if (num==1)
			UAE();
			
			else if (num==2)
			goto jump ;
			
			else
			printf("\n\nInvalid input.");
			exit(1);
		}
		
		else
		printf("\n\nSorry ! Your budget is too low . Please restart program and input new budget.");
	}
	
	else
	{
		printf("\n\n\nOOpss! Someting went wrong. Please read and follow instruction carefully and avoid Spelling Errors ...\n\n");
		exit(1);
	}
	
	system("cls");
	jump :
	printf("\n\tFINALIZE TOUR INFORMATION \n\n");
	fflush(stdin);
	printf("\n\t\t\tCOUNTRY : ");
	gets(data.tour.country);
	print_data(data);
	
}

void print_data(struct customer data)
{
	int num , amount , time ;
	float discount ;
	
	system("color f3");
	
	printf("\n\t\t\tView Packages of '%s' : \n",data.tour.country);
	printf("\nPress any key to view packages.....");
	getch();
	
	system("cls");
	system("color f4");
	
	if ( strcmp(data.tour.country,"UAE") == 0 || strcmp(data.tour.country,"uae") == 0 )
	{
		UAEPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 16560 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 8280 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 4140 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"UK") == 0 || strcmp(data.tour.country,"uk") == 0 )
	{
		UKPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 9060 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 4530 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 2265 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"USA") == 0 || strcmp(data.tour.country,"usa") == 0 )
	{
		USAPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 13440 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 6720 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 3360 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"Australia") == 0 || strcmp(data.tour.country,"australia") == 0 )
	{
		AusPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 7680 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 3840 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 1920 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"Canada") == 0 || strcmp(data.tour.country,"canada") == 0 )
	{
		CanPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 16560 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 8280 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 4140 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"France") == 0 || strcmp(data.tour.country,"france") == 0 )
	{
		FranPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 9700 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 4850 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 2425 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"Germany") == 0 || strcmp(data.tour.country,"germany") == 0 )
	{
		GerPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 7680 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 3840 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 1920 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"Hong Kong") == 0 || strcmp(data.tour.country,"hong kong") == 0 )
	{
		HongPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 8340 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 4170 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 2085 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"Italy") == 0 || strcmp(data.tour.country,"italy") == 0 )
	{
		ItPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 8160 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 4080 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 2040 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"Pakistan") == 0 || strcmp(data.tour.country,"pakistan") == 0 )
	{
		PakPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 3780 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 1890 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 945 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"Spain") == 0 || strcmp(data.tour.country,"spain") == 0 )
	{
		SpaPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 2400 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 1200 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 600 ;
	    	time = 2 ;
		}
	}
	
	else if ( strcmp(data.tour.country,"Turkey") == 0 || strcmp(data.tour.country,"turkey") == 0 )
	{
		TurPack();
		
	    printf("\n\t\t\tEnter package number : ");
	    scanf("%d",&data.tour.package);
	    
	    if( data.tour.package == 1 )
	    {
	    	amount = 1680 ;
	    	time = 8 ;
		}
		else if( data.tour.package == 2 )
		{
	    	amount = 840 ;
	    	time = 4 ;
		}
		else if( data.tour.package == 3 )
		{
	    	amount = 420 ;
	    	time = 2 ;
		}
	}
	else
	printf("\nInvalid month....!");
	
	printf("\n\t\t\tAIRLINE TO REACH '%s' : ",data.tour.country);
	fflush(stdin);
	gets(data.tour.flight);
	
	if( data.tour.members >= 5 )
	{
		if( data.tour.members == 5 )
		discount = ( amount * data.tour.members ) - ( ( amount * data.tour.members ) * 0.05 );
		else if( data.tour.members > 5 && data.tour.members < 10 )
		discount = ( amount * data.tour.members ) - ( ( amount * data.tour.members ) * 0.1 );
		else if( data.tour.members >= 10 )
		discount = ( amount * data.tour.members ) - ( ( amount * data.tour.members ) * 0.2 );
	}
	else
	discount = ( amount * data.tour.members );
	
	system("cls");
	system("color f3");
	
	printf("\n\n\n\n");
	printf("\t\t\t\t\t\t\tPersonal Data \n");
	printf("\t\t\t\t\t_________________________________________________\n");
	printf("\t\t\t\t\t|\tName\t: \t%s\t\t|\n",data.name);
	printf("\t\t\t\t\t|\tAge \t: \t%d\t\t\t|\n",data.age);
	printf("\t\t\t\t\t|\tDate\t: \t%s\t\t|\n",data.date);
	printf("\t\t\t\t\t|_______________________________________________|\n");
	printf("\n\n\t\t\t\t\t\t\tTour Data \n");
	printf("\t\t\t\t\t_________________________________________________\n");
	printf("\t\t\t\t\t|\tCountry     : \t%s\t\t\t|\n",data.tour.country);
	printf("\t\t\t\t\t|\tMonth       : \t%s\t\t\t|\n",data.tour.month);
	printf("\t\t\t\t\t|\tAirline     : \t%s\t\t\t|\n",data.tour.flight);
	printf("\t\t\t\t\t|\tMembers     : \t%d\t\t\t|\n",data.tour.members);
	printf("\t\t\t\t\t|\tPackage     : \t%d\t\t\t|\n",data.tour.package);
	printf("\t\t\t\t\t|\tStay        : \t%d weeks  \t\t|\n",time);
	printf("\t\t\t\t\t|\tTotal Amount: \t%.1f\t\t\t|\n",discount);
	printf("\t\t\t\t\t|_______________________________________________|\n");
	
	printf("\n\n\n\n\n\n\n\nPress any key twice to continue . . .");
	getch();
	getch();
	
	system("cls");
	system("color f5");
	
	printf("\n\n\t\t\t\t1)Query \n\n\t\t\t\t2)Suggestion \n\n\t\t\t\t3)Exit");
	printf("\n\n\t\t\t\tSelect one of the following : ");
	scanf("%d",&num);
	
	switch (num)
	{
		case 1:
			query();
			break;
		
		case 2:
			suggestion();
			break;
			
		case 3:
			exit(1);
			
		default:
			exit(1);
	}	
}
