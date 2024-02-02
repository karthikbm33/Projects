#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
	int i;
	textcolor (red);
	textbackgroundcolor (white);
	for(i=0;i<7;i++)
	{
		printf("Hello");
		delay(300);
		printf("\n");
	}
	return 0;
}

