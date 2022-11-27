#include<stdio.h>
int main()
{
	printf("Name :Mainak saha\n");
	printf("Regestration no. :2260394\n");
	printf("Domain : Pharmacy management\n");
	int id,age,mid,qu;
	float amt;
	char ch[10];
	printf("Enter Coustomer Id\t\n");
	scanf("%d",&id);
	printf("Enter Coustomer Age\t\n");
	scanf("%d",&age);
	printf("Enter Medicine Id\t\n");
	scanf("%d",&mid);
	printf("Enter the quantity to be purchased\t\n");
	scanf("%d",&qu);
		printf("Enter r for regular and t for temporary\n");
	scanf("%s",&ch);
	
	//cost of medicin is fixed =5Rs
	amt=(5*qu)+(5*0.05);
	printf("******Bill******\n");
	printf("The coustomer id is : %d\t\n",id);
	printf("Age of customer : %d\t\n",age);
	printf("Coustomer type : %s\n",ch);
	printf("The medicine id : %d\t\n",mid);
	printf("The total amount with  GST is  : %f\t\n",amt);
return 0;
}
