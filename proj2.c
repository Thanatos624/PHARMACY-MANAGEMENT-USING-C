#include<stdio.h>
int main()
{
	printf("Name :Mainak saha\n");
	printf("Regestration no. :2260394\n");
	printf("Domain : Pharmacy management\n");
int cust_id ,age, qty,choice,amt_index,pharmacy_id[amt_index], item_search,random=0,i=0;
char cust_type[5], med_id, P, L, R, A, med_indexname[10];
float price, disc, finalprice;
printf("\t\t\tWelcome to the My Medicine Store\n\n");
printf("\n\t\tItem Details\n");



{
printf("\n+=============================================+");
printf("\n\n\t\tBill Generation\n");
printf("Enter the Customer ID No.\n");
scanf("%d",&cust_id);
printf("Enter the Customer type (R or T):\n");
scanf("%s",&cust_type[5]);
printf("Enter the age of the customer: \n");
scanf("%d",&age);
printf("Medicine IDs: \n1. P-Paracetamol\n2. L-Levocritizine\n3. R-Rantac\n4. A-Amoxicillin\nEnter medicine bought:\n");
scanf("%s",&med_id);
printf("Enter the amount bought (in tabs):\n");
scanf("%d",&qty);
if(med_id=='P')
{
if(cust_type[5]=='R')
{
price=(5*qty)+0.15*qty;
disc=price-(0.1);
finalprice=disc;
if(qty>=10)
{
disc=price-(0.15);
finalprice=disc;
}
printf("\n\t\tBill\n\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[5]);
printf("\nAge:%d\n",age);
printf("+=====================================+\n");
printf("Price of Paracetamol/tab = Rs.5\n");
printf("GST = 5%\n");
if(qty<10)
{
printf("Discount=10% \n");
}
   if(qty>=10)
   {
    printf("Discount=15%\n");
}
printf("Final bill is: Rs.%f\n\n", finalprice);
printf("\n\t\tThank you for being a valuable customer!\n");
printf("\n+=======================================================+");
}
else if(cust_type[5]=='T')
{
price=(5*qty)+0.15*qty;
if(qty>=10)
{
disc=price-(0.05);
price=disc;
}
printf("\n\t\tBill\n\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[5]);
printf("\nAge:%d\n",age);
printf("+=====================================+\n");
printf("Price of Paracetamol/tab = Rs.5\n");
printf("GST = 5%\n");
if(qty>=10)
{
printf("Discount=5%\n");
}
printf("Final bill is: Rs.%f\n\n", price);
printf("\n\t\tThank you for shopping with us!\n");
printf("\n+=======================================================+");
}
}
else if(med_id=='L')
{
if(cust_type[5]=='R')
{
price=(2*qty)+0.2*qty;
disc=price-(0.1);
finalprice=disc;
if(qty>=10)
{
disc=price-(0.15);
finalprice=disc;
}
printf("\n\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[5]);
printf("\nAge:%d\n",age);
printf("+=====================================+\n");
printf("Price of tablet/tab = Rs.2\n");
printf("GST = 5%\n");
if(qty<10)
{
printf("Discount=10%\n");
}
   if(qty>=10)
   {
    printf("Discount=15%\n");
}
printf("Final Bill is: Rs.%f\n", finalprice);
printf("\n\t\tThank you for being a valuable customer!\n");
printf("\n+=======================================================+");
}
else if(cust_type[5]=='T')
{
price=(2*qty)+0.2*qty;
if(qty>=10)
{
disc=price-(0.05);
price=disc;
}
printf("\n\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[5]);
printf("\nAge:%d\n",age);
printf("+=====================================+\n");
printf("Price of tablet/tab = Rs.2\n");
printf("GST = 5%\n");
if(qty>=10)
{
    printf("Discount=5%\n");
}
printf("Final Bill is: Rs.%f", price);
printf("\n\t\tThank you for shopping with us!\n");
printf("\n+======================================================+");
}
}
else if(med_id=='R')
{
if(cust_type[5]=='R')
{
price=(2*qty)+ 0.2*qty;
disc=price-(0.1);
finalprice=disc;
if(qty>=10)
{
disc=price-(0.15);
finalprice=disc;
}
printf("\n\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[5]);
printf("\nAge:%d\n",age);
printf("+=====================================+\n");
printf("Price of tablet/tab = Rs.2\n");
printf("GST = 5%\n");
if(qty>=10)
{
    printf("Discount=15%\n");
}
if(qty<10)
{
printf("Discount=10%\n");
}
printf("Final Bill is: Rs.%f", finalprice);
printf("\n\t\tThank you for being a valuable customer!\n");
printf("\n+=======================================================+");
}
else if(cust_type[5]=='T')
{
price=(2*qty)+ 0.2*qty;
if(qty>=10)
{
disc=price-(0.05);
price=disc;
}
printf("\n\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[5]);
printf("\nAge:%d\n",age);
printf("+=====================================+\n");
printf("Price of tablet/tab = Rs.2\n");
printf("GST = 5%\n");
if(qty>=10)
{
    printf("Discount=5%\n");
}
printf("Final Bill is: Rs.%f", price);
printf("\n\t\tThank you for shopping with us!\n");
printf("\n+=======================================================+");
}
}
else if(med_id=='A')
{
if(cust_type[5]=='R')
{
price=(10*qty)+ 0.1*qty;
disc=price-(0.1);
finalprice=disc;
if(qty>=10)
{
disc=price-(0.15);
finalprice=disc;
}
printf("\n\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[5]);
printf("\nAge:%d\n",age);
printf("+=====================================+\n");
printf("Price of tablet/tab = Rs.10\n");
printf("GST = 5%\n");
if(qty>=10)
{
    printf("Discount=15%\n");
}
    if(qty<10)
{
printf("Discount=10%\n");
}
printf("Final Bill is: Rs.%f", finalprice);
printf("\n\t\tThank you for being a valuable customer!\n");
printf("\n+=======================================================+");
}
else if(cust_type[5]=='T')
{
price=(10*qty)+ 0.1*qty;
if(qty>=10)
{
disc=price-(0.05);
price=disc;
}
printf("\n\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[5]);
printf("\nAge:%d\n",age);
printf("+=====================================+\n");
printf("Price of tablet/tab = Rs.10\n");
printf("GST = 5%\n");
if(qty>=10)
{
    printf("Discount=5%\n");
}
printf("Final Bill is: Rs.%f", price);
printf("\n\t\tThank you for shopping with us!\n");
printf("\n+=======================================================+");
}
}
else
{
printf("Invalid Choice");
}
}
}

