#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,a[50];
	float sd,mean,variance=0,value,sum=0;
	clrscr();
	printf("\nEnter the no of values to be considered:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d value:",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	mean=(sum/(float)n);
	for(i=0;i<n;i++)
	{
		value=a[i]-mean;
		variance+=value*value;
	}
	variance=variance/n;
	sd=sqrt(variance);
	printf("\nMean=%.4f",mean);
	printf("\nVariance=%.4f",variance);
	printf("\nStandard deviation=%.4f",sd);
	getch();
}