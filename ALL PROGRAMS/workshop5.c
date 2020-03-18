 #include<stdio.h>
 void main()
 {
     int i,j;
	 for(i=1;i<=5;i++)
	 {
	 	printf("%-5.*s %5.*s \n",i,i,"*****","*****");
		 }	
	 for(j=6;j>=1;j--)
	 {
	 	printf("%-6.*s\n",j,"******");
		 }
		 	
 }
