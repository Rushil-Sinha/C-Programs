#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,temp,large,seclarg,a[100];
	clrscr();
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	printf("\nEnter the elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe entered values are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	large=a[0];
	seclarg=a[1];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		{
			seclarg=large;
			large=a[i];
		}
		else if ((a[i]>seclarg)&&(a[i]<large))
			seclarg=a[i];
	}
	if(large!=seclarg)
	{
		printf("\nThe largest no is %d",large);
		printf("\nThe second largest no is %d",seclarg);
	}
	else
		printf("\nSince the set contains the same no, there is only a largest no %d",large);
	getch();
}