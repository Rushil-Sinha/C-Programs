#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int a,b,c,discriminant,deno,flag;
	float x1,x2,x,xr,xi,disc1,sdisc;
	clrscr();
	printf("\nEnter the value of a:");
	scanf("%d",&a);
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	printf("\nEnter the value of c:");
	scanf("%d",&c);
	discriminant=(b*b)-(4*a*c);
	deno=2*a;
	if(a==0)
	{
		printf("\nThe equation is linear");
		getch();
		exit();
	}
	if(discriminant>0)
		flag=1;
	else if(discriminant==0)
		flag=2;
	else
		flag=3;
	switch(flag)
	{
		case 1:
			printf("\nThe roots are real and distinct");
			sdisc=sqrt(discriminant);
			x1=(-b+(sdisc))/(deno);
			x2=(-b-(sdisc))/(deno);
			printf("\nRoot1=%7.3f\nRoot2=%7.3f",x1,x2);
			break;
		case 2:
			printf("\nThe roots are repeating roots");
			x1=(-b)/deno;
			x2=x1;
			printf("\nRoot1=%7.3f\nRoot2=%7.3f",x1,x2);
			break;
		case 3:
			printf("\nThe roots are complex");
			disc1=sqrt(abs(discriminant));
			xr=(float)(-b)/deno;
			xi=disc1/deno;
			printf("\nRoot1=%f+i%f",xr,xi);
			printf("\nRoot2=%f-i%f",xr,xi);
			break;
	}
	getch();
}