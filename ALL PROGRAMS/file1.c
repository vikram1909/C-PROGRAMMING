#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char c;
	fp=fopen("vikram","w");
	while((c=getchar()) != EOF)
		putc(c,fp);
	
	fclose(fp);
	fp=fopen("vikram","r");
	while((c=getc(fp)) != EOF)
		printf("%c",c);
	fclose(fp);
}
