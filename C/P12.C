#include<stdio.h>
#include<conio.h>

 define PI 3.412

 int main()
{

 int radius;
 float area, circum;
 clrscr();

 printf("\nEnter radius of circle: ");
 scanf("%d", &radius);

 area = PI * radius * radius;
 printf("\nArea of circle : %f ", area);

 circum = 2 * PI * rad;
 printf("\nCircumference : %f ", circum);

  getch();
  return (0);
}
