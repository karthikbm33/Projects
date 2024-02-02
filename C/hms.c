//Hospital management system.
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
 void admit(),treatment_diagnose(),display();
 char pname[100][20],pid[100][5],disease[100][20],treatment[100][20],docname[10][20];
 int wardno[100],i,j,c1,c2,c3;
 void main()
{
 int ch;

 printf("--------------------------");
 printf("HOSPITAL MANAGEMENT SYSTEM");
 printf("---------------------------");
 while(1)
 {
 printf("enter your choice: 1 FOR ADMIT PATIENT: 2 FOR DIAGNOSIS AND TREATMENT:3 FOR DISPLAY :4 to exit\n");
 scanf("%d",&ch);
 switch(ch)
   {    
     case 1: admit();
     break;
     case 2:treatment_diagnose(); 
     break;
     case 3:display();
     break;
     default:exit(0);
   }
 }

}

void  admit()
{
    printf("\nenter patient information : ");
    printf("\nenter PATIENT NAME AND PATIENT ID : ");
    scanf("%s%s",pname[c1],pid[c1]);
    c1++;
}

void treatment_diagnose()
{
printf("enter doctor name");
scanf("%s",docname[c2]);
printf("treatment suggested");
scanf("%s",treatment[c2]);
printf("disease name");
scanf("%s",disease[c2]);
c2++ ;
}


  void display()
  int i;
  {
  printf("-----------------patient details\n");
  for(i=0;i<c1;i++)
  {
  printf("patient name is %s\n",pname[i]);
  printf(" patient id is %s\n",pid[i]);
  }
  for( i=0;i<c2;i++)
  {
  printf("  disease and treatment suggested is %s and %s and doctor is %s\n",disease[i],treatment[i],docname[i]);
  }
 }


