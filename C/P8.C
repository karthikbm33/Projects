#include<stdio.h>
#include<conio.h>
void main()
{
 int roll_no,m1,m2,m3,total;
 clrscr();
 printf("\nEnter the roll no : ");
 scanf("%d",&roll_no);
 printf("\nEnter the marks1 : ");
 scanf("%d",&m1);
 printf("\nEnter the marks2 : ");
 scanf("%d",&m2);
 printf("\nEnter the marks3 : ");
 scanf("%d",&m3);
 //printf("\nTotal marks = ");
 //scanf("%d",&total);
 total=m1+m2+m3;
 printf("\nMarks1 :%d",m1);
 printf("\nMarks2 :%d",m2);
 printf("\nMarks3 :%d",m3);
 printf("\nTotal marks : %d",total);


 //printf("\nTotal marks is :%d",total);

// scanf("%d",&total);
 getch();
}