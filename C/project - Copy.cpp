#include<stdio.h>


int main()
{
int patient_age,bed_no[5],ch,i;
char hospital_name[20],patient_name[10],
specialised[5],disease[5],patient_address[10];
char p,n;
 printf("Hospital Management System:");
printf("\nAdmit patient");
printf("Enter hospita name:");
scanf("%s",&hospital_name);
printf("\n Enter patient name:");
scanf("%s",patient_name);
printf("\n Enter patient age:");
scanf("%d",& patient_age);
printf("\n Enter patient address:");
scanf("%s",& patient_address);
printf("\n Enter the patient situation (normal or serious):");
scanf("%c",&p);
if(p=='n')
{
 printf("\n general ward");
}
else
{
 printf("\n ICU");
}
while(1)
{
printf("\n Enter your choice:");
scanf("%d",&ch);
switch (ch)
{
case 1:printf("Adding doctor:\n1.Anushree\n2.Saif\n3.Arnav\n4.Vanya\n5.Jeeven");
break; 
case 2:printf("Display doctor details:\n 1.Anushree-Neurologist\n2.Address-Nimhans hospita\nBengaluru\n3.12 years");
break;
case 3:printf("Display patient details:");
printf("patient name:%s\nPatient age:%d\n patient address:%s\nDisease:%s");
for(i=1;i<5;i++);
{
 printf("\n Enter bed number:%d");
break;
}
case 4:exit(0);
default :printf("Invalid choice");
break;
}
 }
return 0;
}
