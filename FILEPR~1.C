#include<stdio.h>
#include<conio.h>

void main()
{
	FILE*fin,*fout;
	int rollno,n,i,sub1,sub2;
	char name[30];
	clrscr();
	fin=fopen("student.dat","w");
	if(fin==NULL)
	{
		printf("\nFile cannot be opened\n");
		getch();
		exit(0);
	}
	printf("\nEnter the number of students:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nstudent %d\n",i+1);
		printf("\nEnter the roll number:");
		scanf("%d",&rollno);
		printf("\nEnter the name:");
		scanf("%s",&name);
		printf("\nEnter the marks for subject-1:");
		scanf("%d",&sub1);
		printf("\nEnter the marks for subject-2:");
		scanf("%d",&sub2);
		fprintf(fin,"%d%s%d%d\n",rollno,name,sub1,sub2);
	}
	fclose(fin);
	printf("\nStudent file created successfully");
	fin=fopen("student.dat","r");
	if(fin==NULL)
	{
		printf("\nFile cannot be opened\n");
		getch();
		exit(0);
	}
	fout=fopen("output.dat","w");
	if(fout==NULL)
	{
		printf("\nFile cannot be opened\n");
		getch();
		exit(0);
	}
	fprintf(fout,"\nRoll.No Name Subject-1 Subject-2\n\n");
	while(fscanf(fin,"%d%s%d%d \n",&rollno,&name,&sub1,&sub2)!=EOF)
	{
		fprintf(fout,"%d\t%s\t%d\t%d\n",rollno,name,sub1,sub2);
	}
	fclose(fout);
}