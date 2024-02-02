#include<stdio.h>
#include<conio.h>
void main()
{
 int student_id,student_name,m1,m2,m3,m4,m5,total,result,distiction,first_class,second_class,pass,fail;
 //float result;
 //char student_id,student_name;
 clrscr();
 printf("\nEnter the student id : ");
 scanf("%d",&student_id);
 printf("\nEnter the student name : ");
 scanf("%d",&student_name);
 printf("\nEnter the marks1 : ");
 scanf("%d",&m1);
 printf("\nEnter the marks2 : ");
 scanf("%d",&m2);
 printf("\nEnter the marks3 : ");
 scanf("%d",&m3);
 printf("\nEnter the marks4 : ");
 scanf("%d",&m4);
 printf("\nEnter the marks5 : ");
 scanf("%d",&m5);
 //printf("\nTotal marks = ");
 //scanf("%d",&total);
 total=m1+m2+m3+m4+m5;
 printf("\nMarks1 :%d",m1);
 printf("\nMarks2 :%d",m2);
 printf("\nMarks3 :%d",m3);
 printf("\nMarks4 :%d",m4);
 printf("\nMarks5 :%d",m5);
 printf("\nTotal marks : %d",total);

 result=total/500.0*100.0;
 //scanf("result=total/100*500.0 ");
 printf("\nResult =%d",result);
 //printf("\nTotal marks is :%d%d%d%d%d",&total);
// scanf("%d",&total);
 if ("result>=85&&<=100")
// scanf("%d",&distiction);
 printf("\nDistiction");
 scanf("%d",distiction);
 //else
 //printf("\nexit");


 if ("result>=70&&<=84")
 //scanf("%d",first_class);
 printf("\nFirst class");
 scanf("%d",first_class);


 if ("result>=50&&<=69")
// scanf("%d",second_class);
 printf("\nSecond class");
 scanf("%d",second_class);


 if ("result>=35&&<49")
// scanf("%d",pass);
 printf("\njust pass");
 scanf("%d",pass);

 if ("result>=1&&<=34")
 //scanf("%d",fail);
 printf("\nFail");
 scanf("%d",fail);

 getch();
}