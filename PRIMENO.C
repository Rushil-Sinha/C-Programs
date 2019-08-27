// Name: Rushil Sinha
// Date: 09/07/2019

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,m,flag=0;
	clrscr();
	printf("\nEnter a positive int greater than 1:");
	scanf("%d",&n);
	if(n<=1)
	{
		printf("\nThe no. should be greater than 1");
		getch();
		exit();
	}
	else
	{
		for(i=2;i<n;i++)
		{
			m=n%i;
			if(m==0)
			{
				flag=1;
				break;
			}
		}
		if (flag==0)
			printf("\nThe no %d is a prime no",n);
	else
		printf("\nThe no %d is not a prime number",n);
	getch();
}
}