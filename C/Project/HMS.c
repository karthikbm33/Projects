//program of Hospital Management System
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
void h_details();
void adddocter();
void disdocter();
void add_p();
void dis_p();
void indi_p();
void delet_p();
void insrt_p();

int i,n,m,t,a,k=0;
char user[20],pass[20],d_p[20],m_pn[20],p_n[20],p_id[20];

struct patient
{
  int p_age,a,j,bed_no;
  char p_name[30],p_address[20],disease[20],spe[20],dn[20],p_id[30];
  char hn[20],hl[21],d_p[21];
}p[15];

int main()
{
	 printf("\n\t\t\t\t\t ==================================");
     printf("\n\t\t\t\t\t ||  HOSPITAL MANAGEMENT SYSTEM  ||");
     printf("\n\t\t\t\t\t ==================================");
     a :
	 printf("\n\n************************************************************************************************************************");
     printf("\nEnter User Name : ");
 	 scanf("%s",user);
 	 printf("\nEnter the Password : ");
	        do
	        {
	      	pass[k]=getch();
	      	if(pass[k]!='\r')
	       	printf("*");
	       	k++;
		    }while(pass[k-1]!='\r');
	if(strcmp(user,"ADMIN")==0 && strcmp(pass,"HMS@777")==0)
	{
		printf("\n______________________________________________login Successfully________________________________________________________");
	}
	else
	{
		 printf("\n__________________________________________login Failed please try again________________________________________________");
	goto a;
	}
	
	printf("\n\n\n************************************************************************************************************************");    
	printf("\n\t\t\tYour choices are :\n\n\t\t\t1. HOSPITAL DETAILS \n\t\t\t2. ADD DOCTER");
	printf("\n\t\t\t3. ADDMIT PATIENTS \n\t\t\t4. DISPLAY DOCTER \n\t\t\t5. DISPLAY INDIVIDUAL PATIENT");
	printf("\n\t\t\t6. INSERT PATIENTS\n\t\t\t7. DISPLAY All PATIENTS \n\t\t\t8. DISCHARGE PATIENT \n\t\t\t9. LOGOUT");
	 while(1)
  {
  	 printf("\n\n************************************************************************************************************************");
     printf("\n\n\t\tEnter your choice : ");
     scanf("%d",&a);
     printf("\n************************************************************************************************************************");
  
     switch(a)
    {
  	
	case 1:h_details();
          break;  
    
	case 2:adddocter();
	    	break;
	    	
	case 3:add_p();
	    	break;
	    	
	case 4:disdocter();
          break;
          
	case 5:indi_p();
  	     break;
		         
	case 6:insrt_p();
  	     break;
  	     
    case 7:dis_p();
  	     break;
  	     
	case 8:delet_p();
	      break;
		      	      
    case 9:exit(0);    
	  	
 	default: 
	    printf("\n<< Invalid Choice >>");
 		break;
  }
 }
}

void h_details()
{    
 	printf("\nEnter the Hospital Name     : ");
	scanf("%s",p[i].hn);
	printf("\nEnter the Hospital Location : ");
	scanf("%s",p[i].hl);
	printf("\n\t///////////////// The Hospital Details are///////////////// ");
    printf("\n\nThe Hospital Name is     : %s",p[i].hn);
    printf("\n\nThe Hospital Location is : %s",p[i].hl);
} 
void adddocter()
{
	printf("\n=>Enter The Number of Docter You Want to Add : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 printf("\nEnter Docter name       : ");    
         scanf("%s",p[i].dn);
         printf("\nEnter Docter Specialist : ");    
         scanf("%s",p[i].spe);
         printf("\n\t..........Docter Added Successfully.......... ");
	}
}
void add_p()
{
    printf("\n=>Enter The Number of Patient You Want To Addmit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 printf("\n\nEnter patient ID or Name : ");    
         scanf("%s",p[i].p_name);
         printf("\nEnter Patient Address    : "); 
         scanf("%s",p[i].p_address);
         printf("\nEnter patient Age        : ");
         scanf("%d",&p[i].p_age);  
         printf("\nEnter the Disease        : ");
         scanf("%s",p[i].disease);   
	}
	printf("\n\t..........Patient Addmit Successfully.......... ");
}
void disdocter()
{
    	printf("\n\t///////////////// Doctor details are///////////////// ");
    	printf("\n\n\tDocter Name \tDocter Specialist ");
	    printf("\n-----------------------------------------------------------");
		for(i=0;i<n;i++)
	   	{ 
	    printf("\n\t%s \t\t%s",p[i].dn,p[i].spe);
}		}
void dis_p()
{
 	 printf("\n\n\t///////////////// Patient details are/////////////////");	
     printf("\n\tPatient Name  \tPatient Address \tPatient Age \tPatient Disease");
     printf("\n\n--------------------------------------------------------------------------------");
     for(i=0;i<n;i++)
	 {	 
	    printf("\n\t%s \t\t%s \t\t\t%d \t\t%s",p[i].p_name,p[i].p_address,p[i].p_age,p[i].disease);
}  	 }
void indi_p()
{
	printf("\n\n\t\t\t////////INDIVIDUAL PATIENT DETAILS//////// ");
	for(i=0;i<n;i++)
    printf("\n\t\t\tPatient List Are : %d. %s",i+1,p[i].p_name);
    printf("\n*****************************************************************************************");
	printf("\nEnter the Patient Name or Id you want to see: ");
	scanf("%s",p_n);
	printf("\n****************************************************************************************");
    for(i=0;i<n;i++)
	{
		strcpy(p_id,p[i].p_name);
	    if(strcmp(p_n,p_id)==0)
		printf("\n\nPATIENT ID\tPATIENT Age\tPATIENT Disease\n %s\t\t%d\t\t%s",p[i].p_name,p[i].p_age,p[i].disease);
}  }
void insrt_p()
{
	printf("\n\n\t\t////////INSERT PATIENT////////\n\nEnter the number of Patient details you want to insert : ");
	scanf("%d",&m);
	t=n;
	n=m+n;
	for(i=t;i<n;i++)
	{
	printf("\nEnter Patient id and name : ");
    scanf("%s",p[i].p_name);
    printf("\nEnter Patient Address     : "); 
    scanf("%s",p[i].p_address);
    printf("\nEnter Patient age         : ");
    scanf("%d",&p[i].p_age);
    printf("\nEnter the Disease         : ");
    scanf("%s",p[i].disease);
}  }    
void delet_p()         // deleting Patient <>
{
	 printf("\n\n\t\t\t//////// DISCHARGE PATIENT //////// ");
     for(i=0;i<n;i++)
     printf("\n\n\t\t%d. %s",i+1,p[i].p_name);
     printf("\n--------------------------------------------------------------------------------------");	
     printf("\nEnter the Id or name of the patient you want to Discharge: ");
     scanf("%s",d_p);
    for(i=0;i<n;i++)
	{
     	if(strcmp(d_p,p[i].p_name)==0)
       {
   		    while(i<n)
   		    {
   		    	printf("\nDischarge successfully");
	  	        strcpy(p[i].p_name,p[i+1].p_name);
	  	        strcpy(p[i].p_address,p[i+1].p_address);
	  	        p[i].p_age=p[i+1].p_age;
	  	        strcpy(p[i].disease,p[i+1].disease);
	  	        i++;
	        }   		
       }
    }
   n--;	
}
