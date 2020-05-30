#include<stdio.h>
#include<stdlib.h>

int Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void ShowDetail();

int nor=0,nob=0,noc=0,amount=0,count=0;

void main()
{
	while(1)
	{
		switch(Menu())
	{
		case 1:
			Bus();
			printf("\n****Press enter to continue****");
			break;
		case 2:
			Cycle();
			printf("\n****Press enter to continue****");
			break;
		case 3:
			Riksha();
			printf("\n****Press enter to continue****");
			break;
		case 4:
			ShowDetail();
			printf("\n****Press enter to continue****");
			break;
		case 5:
			Delete();
			printf("\n****Press enter to continue****");
		case 6:
			exit(0);
		default:
			printf("\nInvalid choice");
		 
	}
	getch();
	}
	
	

	

	
}
int Menu()
{
	int ch;
	printf("\n1. Enter bus: ");
	printf("\n2. Enter cycle:");
	printf("\n3. Enter Riksha:");
	printf("\n4. Show status:");
	printf("\n5. Delete data:");	
	printf("\n6. Exit:");	
	printf("\n\nEnter your choice:\n");
	scanf("%d",&ch);
	return(ch);
	
}
void Delete()
{
	nob=0;
	noc=0;
	nor=0;
	amount=0;
	count=0;
}
void ShowDetail()
{
	printf("\nNumber of Bus=%d",nob);
	printf("\nnumber of cycle=%d",noc);
	printf("\nnumber of Riksha=%d",nor);
	printf("\nTotal number of vehicle=%d",count);
	printf("\nTotal amount gain=%d",amount);

}
void Riksha()
{
	
	printf("Enter the No. of Riksha you want to store:\n",nob);
	scanf("%d",&nor);
	
	amount=amount+(50*nor);
	count=count+nor;
	printf("\nTotal ammount is:%d",amount);
}

void Cycle()
{
	
	printf("Enter the No. of cycle you want to store:\n",nob);
	scanf("%d",&noc);
	
	amount=amount+(10*noc);
	count=count+noc;
	printf("\nTotal ammount is:%d",amount);
}
void Bus()
{
	
	printf("Enter the No. of Bus you want to store:\n",nob);
	scanf("%d",&nob);
	
	amount=amount+(100*nob);
	count=count+nob;
	printf("\nTotal ammount is:%d",amount);
}

