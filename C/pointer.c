#include<stdio.h> 
void main() 
{ 
 //Declaring variables and pointer// 
 int a=2; 
 int *p; 
 //Declaring relation between variable and pointer// 
 p=&a; 
 //Printing required example statements// 
 printf("\n Size of the integer is %d",sizeof (int));//4// 
 printf("\n Address of %d is %d",a,p);//Address value// 
 printf("\n Value of %d is %d",a,*p);//2// 
 printf("\n Value of next address location of %d is %d",a,*(p+1)); 
 //Garbage value from (p+1) address// 
 printf("\n Address of next address location of %d is %d",a,(p+1)); 
 //Address value +4// 
 //Typecasting the pointer// 
 //Initializing and declaring character data type// 
 //a=2 = 00000000 00000000 00000000 00000010// 
 char *p0; 
 p0=(char*) p; 
 //Printing required statements// 
 printf("\n Size of the character is %d",sizeof(char));//1// 
 printf("\n Address of %d is %d",a,p0);//Address Value(p)// 
 printf("\n Value of %d is %d",a,*p0);//First byte of value a - 2// 
 printf("\n Value of next address location of %d is %d",a,*(p0+1)); 
 //Second byte of value a - 0// 
 printf("\n Address of next address location of %d is %d",a,(p0+1)); 
 //Address value(p)+1// 
}
