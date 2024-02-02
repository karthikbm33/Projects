#include<stdio.h> 
 #include<conio.h> 
 #define PI 3.412 
int main() 
{  
 int R; 
 float Area, Circum;  
 
 printf("\nEnter radius of circle: "); 
 scanf("%d", &R); 
 
 Area = PI * R * R; 
 printf("\nArea of circle : %f ", Area); 
 
 Circum = 2 * PI * R; 
 printf("\nCircumference : %f ", Circum); 
 
 return (0); 
} 
