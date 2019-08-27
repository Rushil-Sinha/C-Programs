#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
	char str[100][100],temp[100];
	int i=0,j=0,n;
	clrscr();
	printf("\nEnter the count:");
	scanf("%d",&n);
	printf("\nEnter the %d items\n",n);
	while (i<n)
	{
		scanf("%s",str[i++]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}
	printf("\nAlphabetically sorted list\n");
	for (i=0;i<n;i++)
	{
		printf("%s\n",str[i]);
	}
	getch();
}