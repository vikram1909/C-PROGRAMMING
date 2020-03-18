#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp1,*fp2,*fp3;
	char ch;
	int countv=0,countc=0;
	fp1=fopen("vikram","r");
	fp2=fopen("vowel","w");
	fp3=fopen("consonent","w");
	if(fp1==NULL)
	{
		printf("file not present");
    }
	else
	{
		while((ch=fgetc(fp1))!=EOF)
		{
			if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
			{
				fputc(ch,fp2);
				countv=countv+1;
			}	
			else if(ch!='\n'|| ch!=' ') 
			{
				fputc(ch,fp3);
				countc=countc+1;
			}
		}
	}
	printf("no of vowels in the file vowel are: %d\n",countv);
	printf("no of consonents in the file consonent are: %d",countc);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
