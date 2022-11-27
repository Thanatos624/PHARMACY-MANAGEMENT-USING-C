#include<stdio.h>
int main()
{
	int cust_id ,age, qty,choice,amt_index,med_id[amt_index],i=0, item_search,random=0;
	char cust_type[5], item_id, R, W, S, item_indexname[10];
	float price, disc, finalprice;
	
	printf("\t\t\tWelcome to the My Medicine Store\n\n");
	
	printf("\n\t\tItem Details\n");
	do
	{
		printf("Choose the action you would like to perform:\n");
	printf("1. Record Medicine\n2. Index and Search Item\n3. Exit\n\nEnter your choice: ");
	scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("Enter the amount of medicines to be indexed: ");
	scanf("%d", &amt_index);
	printf("\nEnter the details of the medicine to be indexed\n");
	for(int i=0;i<amt_index;i++)
	{
		printf("Name: ");
		scanf("%s",&item_indexname[10]);
		printf("\nMedicine ID: ");
		scanf("%d",&med_id[amt_index]);
		printf("\nQuantity(in kg): ");
		scanf("%d",&qty);
		printf("\nPrice(per kg): ");
		scanf("%d",&price);
		printf("\nMedicine indexed\n");
		printf("+==========================+\n\n");
	}
	break;
	
	case 2:
		printf("Enter the amount of medicine to be indexed: ");
	scanf("%d", &amt_index);
	printf("\nEnter the details of the medicine to be indexed\n");
	for(i=0;i<amt_index;i++)
	{
		printf("Name: ");
		scanf("%s",&item_indexname[10]);
		printf("\nMedicine ID: ");
		scanf("%d",&med_id[i]);
		printf("\nQuantity(in kg): ");
		scanf("%d",&qty);
		printf("\nPrice(per kg): ");
		scanf("%d",&price);
		printf("\nItem indexed\n");
		printf("+==========================+\n");
}
printf("Enter the ID of the medicine you would like to search for: ");
		scanf("%d",&item_search);
        for(i=0;i<amt_index;i++)
        {
		
		if(item_search==med_id[i])
		{
			printf("The medicine ID %d can be found in aisle 12\n", item_search);
			printf("+=============================================+\n");
		}
		else if(item_search!=med_id[i])
		{
			continue;
		}
		else
		{
			printf("Wrong ID\n");
			printf("+=============================================+\n");
		}
	}
	break;
	
	case 3:
		printf("Exited");
		return 0;
		break;
		
		default:
			printf("Invalid Selection");
			
			
		}
	
	}
	while(random==0);
	
	
	return 0;
	
}
