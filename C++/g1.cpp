/*#include<conio.h>
#include<stdio.h>
#include<graphics.h>
int main()
{
	bgcolor=white;
	printf("|nHello world");
	return 0;
}*/
#include<graphics.h>
#include<conio.h>
#include<iostream>
int main()
{
 int g,m,r=5,c=15;
 detectgraph(&g,&m);
 initgraph(&g,&m,"");
 while(!kbhit())
 {
  setcolor(c++);
  circle(320,240,r);
  r=r+4;
  if(r>200)
  r=5;
 }
 closegraph();
 return 0;
}

