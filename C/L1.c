//Program of library management
#include<stdio.h>
#include<process.h>
int main()
{
	int qunt,d1,d2,m1,m2,y1,y2,ch;
	char date[10],b_id[15],c_n[15],b_n[25],author[25],publi[25];
	while (1)
	{
	printf("\n\n\t\t\t\t\t\t\t**********WELCOME TO LIBRARY**********\nEnter Book id and name: ");
	scanf("%s %s",b_id,b_n);
	printf("Enter author name and publication house: ");
	scanf("%s %s",author,publi);
	printf("Enter modification date and quantity of book: ");
	scanf("%s %d",date,&qunt);
	printf("Enter the name of borrower: ");
	scanf("%s",c_n);
	printf("Enter the borrowed date: ");
	scanf("%d %d %d",&d1,&m1,&y1);
	printf("Enter the returned date: ");
	scanf("%d %d %d",&d2,&m2,&y2);
	printf("\n\n1.Book details\n2.Details of Borrower\n3.Details of penalty\n4.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("\n\n\t\t\t\t\t\t\tDetails of Book in Library\n\nDate\t\tBook ID\t\tBook Name\t\tAuthor Name\t\tPublication house\t\tNo of books\n%s\t%s\t\t%s\t\t%s\t\t%s\t\t%d",date,b_id,b_n,author,publi,qunt);
	       break;
	case 2:printf("\n\n\t\t\t\t\t\t\tDetails of Borrower\n\nBorrower Name: %s\nDate of borrowed: %d-%d-%d\nDate of returned: %d-%d-%d\n",c_n,d1,m1,y1,d2,m2,y2);
	       break;
	case 3:printf("\n\n\t\t\t\t\t\t\tDetails of penalty for Borrower\n");
	       if(d2-d1>=10 || m1<m2 || y1<y2 || m1>m2)
	       printf("\n%s should pay the fee of Rs.100 as there was delay of more than 10 days",c_n);
	       else
	       printf("\n%s need not to pay the fee as there was no delay of more than 10 days",c_n);
	case 4:exit(0);
	default:printf("Invalid choice");
	        break;
	}
	}
	return 0;
}
