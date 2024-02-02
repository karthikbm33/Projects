#include <stdio.h>
#include <conio.h>
#define PI 3.142

void main()
{
 float radius,area,circum;

 clrscr ();

 printf("Enter the radius of ciscle: ");

 scanf("%f",& radius);
 area=PI*radius*radius;
 circum=2*PI* radius;
 printf("\n area of circle=%f \n cercumference of circle = %f", area, circum);
 getch();
}