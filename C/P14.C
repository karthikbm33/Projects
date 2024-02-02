#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
  clrscr();
  printf("%d to the power of 2=%lf",5,pow(5,2));
  printf("\n Square roof of %d=%.lf",36,sqrt(36));
  printf("\n Absolute value of %d=%.lf",-20,fabs(-20));
  printf("\n Ceil value of %.01f=%.lf", 5.6,ceil(5.3));
  printf("\n Floor value of %.01f=%.lf",5.6,floor(5.3));
  printf("\n Sin of %d=%.lf",90,sin(90));
  printf("\n Cosine of %d=%.lf",0,cos(0));
  getch();
  return 0;
}
