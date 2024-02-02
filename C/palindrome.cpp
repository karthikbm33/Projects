#include<stdio.h> 
#include<conio.h> 
int main() 
{ 

 int num,sum=0,rev=0,d,n; 
 printf("Enter the number: "); 
 scanf("%d",&num); 
 n=num; 
 while(num) 
{ 
 d=num%10; 
 num=num/10; 
 sum=sum+d; 
 rev=rev*10+d; 
} 
printf("Sumof digits = %d",sum); 
printf("\nReverse of the number = %d",rev); 
if(n==rev) 
 printf("\n %d Number is palindrome",rev); 
else 
 printf("\n %d Number is not palindrome",rev); 
 return 0;
} 
