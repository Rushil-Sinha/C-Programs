#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,gcd,lcm,x,y;
	clrscr();
	printf("\n Enter the first positive integer:");
	scanf("%d",&a);
	printf("\n Enter the second positive integer:");
	scanf("%d",&b);
	if((a==0)||(b==0))
	{
		printf("\nGCD and LCM is computed for positive integers");
	}
	else
	{
		x=a;
		y=b;
		while (x!=y)
		{
			if(x>y)
				x=x-y;
			else
				y=y-x;
		}
		gcd=x;
		printf("\nGCD of %d and %d is %d",a,b,gcd);
		lcm=(a*b)/gcd;
		printf("\nLCM of %d and %d is %d",a,b,lcm);
	}
	getch();
}
