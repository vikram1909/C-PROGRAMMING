/* Writhe a program to copy the content in reverse from one file to another file*/
 #include<stdio.h>
 #include<stdlib.h>
 void main()
 {
 	FILE *fp1,*fp2;
 	char ch[50],c;
 	int i,n;
 	fp1=fopen("E:\\MCA_2019\\cPractice\\File\\file2.txt","w");
 	fp2=fopen("E:\\MCA_2019\\cPractice\\File\\reverse.txt","w");
 	if(fp1==NULL)
 	{
 		printf("error");
	}
	 printf("enter a sentence: ");
	 gets(ch);
	 fprintf(fp1,"%s",ch);
	 fclose(fp1);
	 fp1=fopen("E:\\MCA_2019\\cPractice\\File\\file2.txt","r");
	 if(fp1==NULL)
 	{
 		printf("file is not presented");
	 }
	 fseek(fp1,0,SEEK_END);
	 n=ftell(fp1);
	 printf("%d\n",n);
	 i=0;
	 while(i<n)
	 {
	 	i++;
	 	fseek(fp1,-i,SEEK_END);
	 	c=fgetc(fp1);
	 	fprintf(fp2,"%c",c);
	 	printf("%c",c);
	 }
	 fclose(fp1);
	 fclose(fp2);
 }
