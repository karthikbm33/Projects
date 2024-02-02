/*printing the statement of voting eligible*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int age;
 clrscr();
 printf("\nEnter the age : ");
 scanf("%d",&age);
 if (age>=18)
 printf("\nYou can eligible to vote");
 else
 printf("\nYou are not eligible to vote");
 getch();
}