#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void read();
struct patient{
int ch,Cid,age,Mid,q,p,j,k,l,t,cost;
    int m,n,w;
    char R;
    char name[30];
    float fin,D,G,gst,disc;


};
int main()
{
	printf("Name :Mainak saha\n");
	printf("Regestration no. :2260394\n");
	printf("Domain : Pharmacy management\n");
    struct patient s[100];
    char name1[50];
int age1,numb;
    int m,n,i;
   int no,i1,j,n1=1,first,last,mid,check;
    read();
    printf("WELCOME TO PHARMACY MANAGEMENT SYSTEM\n");
    read();
    printf("1 : CUSTOMER DETAILS\n");
    printf("2 : CUSTOMER BILL\n");
    printf("3 : RECORD MEDICINE\n");
    printf("4 : EXIT\n");
    read();
    do{
	printf("\nENTER CHOICE : ");
    scanf("%d",&s[i].ch);

switch(s[i].ch)
{
case 1 :
printf("\nENTER NO.OF PATIENTS:");
scanf(" %d",&n);

for(i=0;i<n;i++)
{
read();
printf("\nCUSTOMER ID : ");
scanf(" %d",&s[i].Cid);

printf("CUSTOMER AGE : ");
scanf(" %d",&s[i].age);

printf("CUSTOMER TYPE (R/T): ");
scanf(" %s",&s[i].t);

printf("MEDICINE ID : ");
scanf(" %d",&s[i].Mid);
read() ;

}
    break;
   
    case 2:
    {

printf("\n1.PARACETAMOL\n");
    printf("2.LEVOCITRIZINE \n");
    printf("3.RANTAC\n");
    printf("4.AMOXICILIN\n");
do
{
  printf("\nENTER MEDICINE NO: ");
        scanf(" %d",&n);
 
if(n==1)
{
printf("1 NO: OF PARACETAMOL : ",s[i].q);
scanf(" %d",&s[i].q);
//paracetamol per tab 5/-
s[i].p=5*s[i].q;
printf("RATE = %d\n",s[i].p);
}
else if(n==2)
{
printf("2 NO: OF LEVOCITRIZINE : ",s[i].q);
scanf("%d",&s[i].q);
//amoxilin per tab 5/-
s[i].j=2*s[i].q;
printf("RATE = %d\n",s[i].j);
}
else if(n==3)
{
printf("3 NO: OF RANTAC : ",s[i].q);
scanf("%d",&s[i].q);
//levocitrizne per tab 2/-
s[i].k=5*s[i].q;
printf("RATE = %d\n",s[i].k);
}
else if(n==4)
{
printf("4 AMOXICILIN : ",s[i].q);
scanf("%d",&s[i].q);
//rantac per tab 10/-
s[i].l=10*s[i].q;
printf("RATE = %d\n",s[i].l);
}
n++;
    }
  while(n<=4);
   
    //type
    read();
   printf("\nCUSTOMER TYPE : ");
scanf(" %s",&s[i].t);
if(s[i].t =='R')
{
read();
s[i]. cost=s[i].p+s[i].j+s[i].k+s[i].l;
printf("\nTOTAL COST = %d \n",s[i].cost);
s[i].disc =s[i].cost*0.1;
s[i].D=s[i].cost-s[i].disc;
printf("DISCOUNT COST = %f \n",s[i].D);
s[i].gst=s[i].cost*0.05;
s[i].G=s[i].D+s[i].gst;
printf("GST COST = %f \n",s[i].G);
s[i].fin=s[i].D+s[i].G;
printf("FINAL AMT = %f \n",s[i].fin);
read();
}
    else
    {
    read();
    s[i].cost=s[i].p+s[i].j+s[i].k+s[i].l;
    printf("\nTOTAL COST = %d \n",s[i].cost);
    s[i].gst=s[i].cost*0.05;
     s[i]. G=s[i].D+s[i].gst;
printf("GST COST = %f \n",s[i].G);
s[i].fin=s[i].cost+s[i].G;
printf("FINAL AMT = %f \n",s[i].fin);
read();
}
    }
    break;
    case 3:
    
    printf("Enter Number of medicine names:");
    scanf("%d",&no);
    char medname[50][50];
    for(i1=0;i1<no;i1++)
    {
        printf("Enter %d th medicine name:",n1++);
        scanf("%s",&medname[i1]);
    }
    for(i1 = 0;i1<(no-1);i1++)//sortings
    {
        for(j = 0;j<(no-i1-1);j++)
            if (strcmp(medname[j],medname[j + 1])>0)
            {
                char temp[50];
                strcpy(temp, medname[j]);
                strcpy(medname[j], medname[j + 1]);
                strcpy(medname[j + 1], temp);
            }
    }
    printf("Sorted");
    char searchname[50];
    printf("Enter the medicine to be searched:");
    scanf("%s",searchname);
    first=0;last=no-1;
    while (first<=last)
    {
        mid=(first+last)/2;
        if(strcmp(searchname,medname[mid])>0)
        first=mid+1;
        else if(strcmp(searchname,medname[mid])<0)
        last=mid-1;
        else{
        check=1;
        printf("Medicine found.");
        break;
        }
    }
    if(check!=1)
    printf("not found");
    
break;

default:
printf("INVALID CHOICE\n");
}
}while(s[i].ch!=4);
if(s[i].ch==4)
printf("Program terminated");
   
}

void read()
{
int i,j;
char x='-';
for(i=1;i<=2;i++)
{
for(j=1;j<=25;j++)
printf("%c",x);
printf("\n");
}
}

