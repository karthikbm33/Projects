/*printing the statement of voting eligible*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int marks,distiction,first_class,second_class,pass,fail;
 clrscr();
 printf("\nEnter the marks : ");
 scanf("%d",&marks);
 if (marks>=85&&<=100)
 printf("\nDistiction");
 scanf("%d",distiction);

 if (marks>=70&&<=84)
 printf("\nFirst class");

 if (marks>=50&&<=69)
 printf("\nSecond class");

 if (marks>=35&&<=49)
 printf("\npass");

 if (marks>=1&&<=34)
 printf("\nFail");

 getch();
}