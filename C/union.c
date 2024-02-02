#include<stdio.h>
void main()
{
	union
	{
		struct
		{
			char c1,c2,c3,c4;
			int i;
			float f;				
		}x;
		struct
		{
			int i1,i2,i3;
			char ch;
			float f1,f2;
		}y;
		long l;
		double d;
		long double id;		      
	}u;
	printf("\nSize of Union =%d",sizeof(u));
}
