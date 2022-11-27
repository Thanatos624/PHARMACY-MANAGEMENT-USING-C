#include<stdio.h>
int main()
{    printf("Name :Mainak saha\n");
	printf("Regestration no. :2260394\n");
	printf("Domain : Pharmacy management\n");
    int choice;
    do
    { 
    printf("ENTER 1 TO TAKE CUSTOMER DETAILS\n2 TO DISPLAY THE CUSTOMER DETAIL\n3 TO DISPLAY CUSTOMER BILL\n4 TO EXIT\nENTER YOUR CHOICE:");
    scanf("%d",&choice);  
    int customer_id,age;
    char customer_type,med_id;
    int customer_age,meds_quantity;
    float bill;
    switch(choice)
    {
    case 1:
        printf("PLEASE ENTER THE FOLLOWING DETAILS:\n");
        printf("Enter Customer ID:");
        scanf("%d",&customer_id);
        printf("Enter age:");
        scanf("%d",&age);
        printf("Enter Customer Type(R-Regular,T-temporary customer):");
        scanf(" %c",&customer_type);
        printf("Enter Medicine name P-Paracetamol, L-Levocitrizine, R-Rantac, A-Amoxicillin:");
        scanf(" %c",&med_id);
        printf("Enter the Quantity:");
        scanf("%d",&meds_quantity);
       
    break;
    case 2:
    	 printf("CUSTOMER DETAILS:\n");
        printf("Customer ID:%d\n",customer_id);
        printf("Age:%d\n",age);
        printf("Customer Type:");
        if(customer_type=='R'||customer_type=='r')
        printf("Regular\n");
        else printf("Temporary\n");
        if(med_id=='P'||med_id=='p')
        printf("Medicine Name:Paracetamol\n");
        else if(med_id=='L'||med_id=='l')
        printf("Medicine Name:Levocitrizine\n");
        else if(med_id=='R'||med_id=='r')
        printf("Medicine Name:Rantac\n");
        else 
        printf("Medicine Name:Amoxicillin\n");
    break;
   case 3:
       if(med_id=='P'||med_id=='p')
    bill=((float)meds_quantity)*(5.0f);
    else if(med_id=='L'||med_id=='l')
    bill=(meds_quantity)*(2.0f);
    else if(med_id=='R'||med_id=='r')
    bill=(meds_quantity)*(2.0f);
    else bill=(meds_quantity)*(10.0f);

    if(customer_type=='R')//discount if any and 5 percent gst on final bill
    { 
    bill=(bill*((100.0f-10.0f)/100.0f)*((100.0f+5.0f)/100.0f));
    }
    else bill=(bill)*((100.0f+5.0f)/100.0f);
    printf("CUSTOMER BILL:");
    if(med_id=='P'||med_id=='p')
    printf("Medicine Name:Paracetamol\n");
    else if(med_id=='L'||med_id=='l')
    printf("Medicine Name:Levocitrizine\n");
    else if(med_id=='R'||med_id=='r')
    printf("Medicine Name:Rantac\n");
    else 
    printf("Medicine Name:Amoxicillin\n");
    printf("Quantity:%d\n",meds_quantity);
    printf("Final Bill:%f\n",bill);
    break;
    
    }
}while(choice!=4);
if(choice==4)
printf("Program terminated");
return 0;
}
