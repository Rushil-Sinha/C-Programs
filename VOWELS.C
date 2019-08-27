
  #include<stdio.h>
  #include<conio.h>
  #include<ctype.h>
  void main()
   {
     char str[100];
     int i,len,ccount=0,vcount=0,dcount=0,wcount=0,scount=0;
     clrscr();
     printf("\n enter the string:");
     gets(str);
     strlwr(str);
     len=strlen(str);
     for (i=0;i<len;i++)
      {
       if (isalpha(str[i]))
	{
	 if ((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
	 vcount++;
	else
	ccount++;
	}
	 else
	  {
	   if(isdigit(str[i]))
	      dcount++;
	   else if (isspace(str[i]))
	      wcount++;
	   else
	      scount++;
	   }
	 }
	  printf("\n vowels-%d",vcount);
	  printf("\n consanants-%d",ccount);
	  printf("\n digits-%d",dcount);
	  printf("\n special character-%d",scount);
	  printf("\n white space-%d",wcount);
	  getch();
   }